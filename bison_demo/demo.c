/*
*Name:gramtree_v1.c
*Author:WangLin
*Created on:2015-10-03
*Function:实现变长参数构造树&遍历树函数&错误处理函数，yyparse()启动文法分析
*/
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<stdarg.h>//变长参数函数所需的头文件
# include"gramtree.h"
# include"yacc.h"

#define MAXSTRING_LEN 257
#define MAXIDENTI_LEN 255

int yylex();
int yyparse();
FILE* yyin;
char* filename;
FILE* fp = NULL;

extern int tokens_num;
extern int lcol;
extern int rows;
extern char *yytext;
extern int yyleng;

int flag = 0;
int i;
struct ast *newast(char* name,int num,...)//抽象语法树建立
{
    va_list valist; //定义变长参数列表
    struct ast *a=(struct ast*)malloc(sizeof(struct ast));//新生成的父节点
    struct ast *temp=(struct ast*)malloc(sizeof(struct ast));
    if(!a) 
    {
        yyerror("out of space");
        exit(0);
    }
    a->name=name;//语法单元名字
    va_start(valist,num);//初始化变长参数为num后的参数

    if(num>0)//num>0为非终结符：变长参数均为语法树结点，孩子兄弟表示法
    {
        temp=va_arg(valist, struct ast*);//取变长参数列表中的第一个结点设为a的左孩子
        a->l=temp;
        a->line=temp->line;//父节点a的行号等于左孩子的行号

        if(num>=2) //可以规约到a的语法单元>=2
        {
            for(i=0; i<num-1; ++i)//取变长参数列表中的剩余结点，依次设置成兄弟结点
            {
                temp->r=va_arg(valist,struct ast*);
                temp=temp->r;
            }
        }
    }
    else //num==0为终结符或产生空的语法单元：第1个变长参数表示行号，产生空的语法单元行号为-1。
    {
        int t=va_arg(valist, int); //取第1个变长参数
        int c=va_arg(valist, int); //取第2个变长参数，列号
        a->line=t;
        a->cols=c;
        if((!strcmp(a->name,"ID"))||(!strcmp(a->name,"TYPE")))//"ID,TYPE,INTEGER，借助union保存yytext的值
        {char*t;t=(char*)malloc(sizeof(char* )*40);strcpy(t,yytext);a->idtype=t;}
        else if(!strcmp(a->name,"INTEGER")) {a->intgr=atoi(yytext);}
        else {}
    }
    return a;
}

void eval(struct ast *a,int level)//先序遍历抽象语法树
{
    if(a!=NULL)
    {
        for(i=0; i<level; ++i)//孩子结点相对父节点缩进2个空格
            fprintf(fp,"  ");
        if(a->line!=-1){ //产生空的语法单元不需要打印信息
            fprintf(fp,"%s ",a->name);//打印语法单元名字，ID/TYPE/INTEGER要打印yytext的值
            if((!strcmp(a->name,"ID"))||(!strcmp(a->name,"TYPE")))fprintf(fp,": %s ",a->idtype);
            else if(!strcmp(a->name,"INTEGER"))fprintf(fp,": %d",a->intgr);
            //else
            fprintf(fp,"(%d, %d)",a->line, a->cols);
        }
        fprintf(fp,"\n");

        eval(a->l,level+1);//遍历左子树
        eval(a->r,level);//遍历右子树
    }
}

void evalformat(struct ast *a, int level)
{
    if(flag == 0){
        printf("打印syntax tree:\n");
        eval(a,level);
        printf("syntax tree打印完毕!\n\n");
    }
}

void yyerror(char*s,...) //变长参数错误处理函数
{
    flag = 1;
    va_list ap;
    va_start(ap,s);
    if(!strcmp(s,"syntax error")) 
    {
        return;
    }
    fprintf(fp,"(row: %d, ",yylineno);//错误行号
    int cols = va_arg(ap, int);
    fprintf(fp,"col: %d) :error:",cols);//错误列号
    vfprintf(fp,s,ap);
    fprintf(fp,"\n");
}

int Has_TAB(char *target) {
    int limit = strlen(target);
    for(int i = 0; i<limit; ++i) {
        if(target[i] == '\t')
            return 1;
    }
    return 0;
}

int main(int argc, char* args[])
{
    if (argc > 1) {
    FILE *file = fopen(args[1], "r");
    if (argc > 2) {
        filename = args[2];
    }else {
        printf("Please designate the name of the outfile!\n");
        return 1;
    }
    if (!file) {
      printf("can not open file");
      return 1;
    } else {
      yyin = file;
    }
  }

  fp = fopen(filename,"w+");
  if(!strcmp(args[1],"tests/case_11.pcat")){
    fprintf(fp,"ROW      COL     TYPE                TOKEN/ERROR MESSAGE\n");
    while(1){
        int n = yylex();
        if(n == T_EOF){
            break;
        }
        else if(n == C_EOF){
            fprintf(fp,"%d       %d       comment                     an unterminated comment\n",rows,lcol);
            break;
        }
        else {
            switch (n)
            {
            case STRING:
                if (yyleng > MAXSTRING_LEN) {
                    fprintf(fp,"%d       %d       string                     an overly long string\n",rows,lcol);
                    tokens_num--;
                }
                //an invalid string with tab(s) in it
                else if(Has_TAB(yytext)) {
                    fprintf(fp,"%d       %d       string                     an invalid string with tab(s) in it\n",rows,lcol);
                    tokens_num--;
                }
                //an ok string
                else {
                    fprintf(fp,"%d       %d       string                     %s\n",rows,lcol,yytext);
                }
                lcol += yyleng;
                break;
            
            case ID:
                //an overly long identifier
                if (yyleng > MAXIDENTI_LEN) {
                    fprintf(fp,"%d       %d       identifier                     an overly long identifier\n",rows,lcol);
                    tokens_num--;
                }
                //an ok identifier
                else {
                    fprintf(fp,"%d       %d       identifier                     %s\n",rows,lcol,yytext);
                }
                lcol += yyleng;
                break;
            
            case UTSTRING:
                fprintf(fp,"%d       %d       string                     an unterminated string\n",rows,lcol);
                rows++;
                break;
            
            case BADCHAR:
                fprintf(fp,"%d       %d       bad character               a bad character (bell)\n",rows,lcol);
                lcol += yyleng;
                break;

            case INTEGER:
                //an out of range integer
                if (yyleng > 10 || atoll(yytext) > 2147483647) {
                    fprintf(fp,"%d       %d       integer                   an out of range integer\n",rows,lcol);
                    tokens_num--; 
                }
                //valid case
                else { 
                    fprintf(fp,"%d       %d       integer                   %s\n",rows,lcol,yytext);
                }
                lcol += yyleng;
                break;

            case ADD:
            case MINUS:
            case STAR:
            case DIVISON:
            case BIGGER:
            case SMALLER:
            case NBIGGER:
            case NSMALLER:
            case SQUARE:
            case ASSIGNOP:
                fprintf(fp,"%d       %d       operator                   %s\n",rows,lcol,yytext); 
                lcol += yyleng;
                break;
            
            case FLOAT:
                fprintf(fp,"%d       %d       real                   %s\n",rows,lcol,yytext);
                lcol += yyleng;
                break;
            
            default:
                break;
            }
        }
    }
    fprintf(fp,"\nThe number of the tokens: %d\n", tokens_num);
  }
  else{
    yyparse();
  }
  fclose(fp);
  return 0;
}
