#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
char nome[100]; int idade;
} tpessoa;
int main(int argc, char **argv)
{
	FILE* teste = fopen("C:\\Users\\Stenio Andrade.DELL_VOSTRO-350\\OneDrive\\Programacao_Imperativa\\Programas\\Geany\\Arquivos\\teste.txt","rb");
	tpessoa pessoa;
	while(fread(&pessoa,sizeof(tpessoa),1,teste)==1){
		puts(pessoa.nome);
		printf("%d",pessoa.idade);
	}
	printf("\n");
	fclose(teste);
	return 0;
}
