#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
char nome[100]; int idade;
} tpessoa;
int main(int argc, char **argv)
{
	FILE* teste = fopen("C:\\Users\\Stenio Andrade.DELL_VOSTRO-350\\OneDrive\\Programacao_Imperativa\\Programas\\Geany\\Arquivos\\teste.txt","wb");
	tpessoa pessoa;
	do{
		gets(pessoa.nome);
		scanf("%d%*c",&pessoa.idade);
		if(pessoa.idade>=0){
			fwrite(&pessoa,sizeof(tpessoa),1,teste);
		}
	}while(pessoa.idade>=0);
	printf("\n");
	fclose(teste);
	return 0;
}

