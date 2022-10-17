all: opcoes.o calculadora.o soma.o subtracao.o multiplicacao.o divisao.o
	gcc opcoes.o calculadora.o soma.o subtracao.o multiplicacao.o divisao.o -o calculadora

opcoes.o: opcoes.c
	gcc -c opcoes.c 

soma.o: soma.c
	gcc -c soma.c 

subtracao.o: subtracao.c
	gcc -c subtracao.c 

multiplicacao.o: multiplicacao.c
	gcc -c multiplicacao.c 

divisao.o: divisao.c
	gcc -c divisao.c 
	
calculadora.o: calculadora.c
	gcc -c calculadora.c