#include <stdio.h>

int main(int argc, char **argv)
{
	char C = 'A' , *P;
	P = &C;
	printf("O endereco de C e : %p\n",P);
	printf("O endereco de P e : %p\n",&P);
	printf("O  valor   de P e : %p\n",P);
	printf("O  valor   de C e : %c\n",*P);
	return 0;
}
