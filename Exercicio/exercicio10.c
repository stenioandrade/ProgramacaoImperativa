#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv)
{
	char ch;
	FILE* pont = fopen("C:\\Users\\Stenio Andrade.DELL_VOSTRO-350\\OneDrive\\Programacao_Imperativa\\Programas\\Geany\\Arquivos\\teste.txt","r");
	if( pont == NULL ){ 
		puts("FILE ERROR!");
		exit(1);
	}
	while(!feof(pont)){
		ch = fgetc(pont);
		if ((ch!='a')&&(ch!='e')&&(ch!='i')&&(ch!='o')&&(ch!='u')&&(ch!='A')&&(ch!='E')&&(ch!='I')&&(ch!='O')&&(ch!='U')) printf("%c",ch);
	}
	printf("\n");
	fflush(pont);
	fseek(pont,0,0);
	rewind(pont);
	fclose(pont);
	
	return 0;
}

