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
	./demo tests/case_1.pcat
	./demo tests/case_2.pcat
	./demo tests/case_3.pcat
	./demo tests/case_4.pcat
	./demo tests/case_5.pcat
	./demo tests/case_6.pcat
	./demo tests/case_7.pcat
	./demo tests/case_8.pcat
	./demo tests/case_9.pcat
	./demo tests/case_10.pcat