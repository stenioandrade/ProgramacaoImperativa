#include <stdio.h>
#include <stdlib.h>
int main (){
	int l,c,i,j;
		FILE* arq;
			arq = fopen("C:\\Users\\Stenio Andrade\\OneDrive\\Programas\\Geany\\Labirintos\\texts\\10x10.txt","r");
				if(arq!=NULL){
					fscanf(arq,"%d %d%*c",&l,&c);
					printf("linhas = %d e colunas = %d\n",l,c);
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
				}
	/*char s[l][c];
		for(i=0;i<l;i++){
									for(j=0;j<c;j++){
										fprintf(arq,"%s",s[i][j]);
									}
								}*/
return 0;
}
