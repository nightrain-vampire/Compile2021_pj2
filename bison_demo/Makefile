clean:
			@-rm -f *.o *~ yacc.c yacc.h lex.c demo
.PHONY: clean

GCC = @gcc
LEX = @flex
YACC = @bison

demo: demo.c yacc.o
			$(GCC) demo.c yacc.o -o demo

yacc.o: yacc.c
			$(GCC) -c yacc.c

yacc.c: demo.y lex.c
			$(YACC) -o yacc.c -d demo.y

lex.c: demo.l
			$(LEX) -o lex.c demo.l

            