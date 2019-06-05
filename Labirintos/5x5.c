#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* ler (){
	int l,c,i,j;
	char nome[100];
	scanf("%s",nome);
	char txt[5]=".txt";
	char endereco[100] = "C:\\Users\\Stenio\\OneDrive\\Programas\\Geany\\Labirintos\\texts\\";
		FILE* arq;
			arq = fopen(strcat(endereco,strcat(nome,txt)),"r");
				if(arq==NULL){
					printf("Arquivo inexistente!\n");
					return 0;
				}
				else {
					fscanf(arq,"%d %d%*c",&l,&c);
						char m[l][c];
							while (!feof(arq)){
								for(i=0;i<l;i++){
									for(j=0;j<c;j++){
										m[i][j]=fgetc(arq);
										fgetc(arq);
										printf("%c ",m[i][j]);
									}
									printf("\n");
								}
							}
							fclose(arq);	
				
						char *p = &m[l][c];
				return *p;
				}
}
/*int escrever(){
	int i,j;
	FILE* arq;
	arq = fopen("C:\\Users\\Stenio\\OneDrive\\Programas\\Geany\\Labirintos\\texts\\eoq.txt","w");
	fprintf(arq, "%d %d\n", linha0,coluna);
    	for(i=0;i<linha;i++){		
	        for(j=0;j<coluna ;j++){
		fprintf(arq, "%c ", m[i][j]); 	
            }
			 fprintf(arq,"\n");
    	} 
	fclose(arq);
    return 0;
}*/
int main(){
	char* pont = ler();
	printf("%d\n",pont);
	
	
return 0;
}

