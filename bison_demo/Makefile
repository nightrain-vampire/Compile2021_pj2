clean:
			@-rm -f *.o *~ yacc.c yacc.h lex.c demo.tab.c demo
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

pjtest2:
	bison -o yacc.c -d demo.y
	flex -o lex.c demo.l
	gcc -c yacc.c
	gcc demo.c yacc.o -o demo


test:
	./demo tests/case_1.pcat ans/res1.txt
	./demo tests/case_2.pcat ans/res2.txt
	./demo tests/case_3.pcat ans/res3.txt
	./demo tests/case_4.pcat ans/res4.txt
	./demo tests/case_5.pcat ans/res5.txt
	./demo tests/case_6.pcat ans/res6.txt
	./demo tests/case_7.pcat ans/res7.txt
	./demo tests/case_8.pcat ans/res8.txt
	./demo tests/case_9.pcat ans/res9.txt
	./demo tests/case_10.pcat ans/res10.txt
	./demo tests/case_12.pcat ans/res12.txt
	./demo tests/case_13.pcat ans/res13.txt
	./demo tests/case_14.pcat ans/res14.txt