#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	FILE* pont = fopen("C:\\Users\\Stenio Andrade.DELL_VOSTRO-350\\OneDrive\\Programacao_Imperativa\\Programas\\Geany\\Arquivos\\teste.txt","w");
	char str[100];
	do{
		gets(str);
		if(strcmp(str,"sair")!=0)
		fputs(str,pont);
		fprintf(pont,"\n");		
	}while(strcmp(str,"sair")!=0);
	return 0;
}

