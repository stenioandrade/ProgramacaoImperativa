#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char nome[100];
	int cod;
	char endereco[100];
}funcionario;
int main(int argc, char **argv)
{
	int n; int x=n;
	puts("insira o numero de funcionarios: ");
	scanf("%d",&n);
	funcionario func;
	FILE* pont = fopen("C:\\Users\\Stenio Andrade.DELL_VOSTRO-350\\OneDrive\\Programacao_Imperativa\\Programas\\Geany\\Arquivos\\teste.txt","w");	
	do{
		gets(func.nome);
		scanf("%d%*c",&func.cod);
		gets(func.endereco);
		fwrite(&func,sizeof(funcionario),1,pont);
		n--;
	}while (n>=0);
	fflush(pont);
	pont = NULL;
	fclose(pont);
	FILE* ponte = fopen("C:\\Users\\Stenio Andrade.DELL_VOSTRO-350\\OneDrive\\Programacao_Imperativa\\Programas\\Geany\\Arquivos\\teste.txt","r");	
	do{
		fread(&func,sizeof(funcionario),1,ponte);
		printf("nome: %s cod: %d ender: %s",func.nome,func.cod,func.endereco);
		x--;
	}while (x>=0);
	return 0;
}

