#include <stdio.h>
#include <stdlib.h>

typedef	struct{
		char nome;
		int idade;
	}registro;
int main(int argc, char **argv){
	registro pessoa, *p;
	pessoa.nome = 'b';
	pessoa.idade = 10;
	printf("%c tem %d anos.\n",pessoa.nome,pessoa.idade);
	p = &pessoa;
	(*p).nome = 'A';
	(*p).idade = 100;
	printf("%c tem %d anos.\n",(*p).nome,(*p).idade);
	return 0;
}

