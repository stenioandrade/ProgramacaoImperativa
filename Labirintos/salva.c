#include <stdio.h>
#include <stdlib.h>
int main (){
	int l,c,i,j;
		FILE* arq;
			arq = fopen("C:\\Users\\Stenio Andrade\\OneDrive\\Programas\\Geany\\Labirintos\\texts\\arqsalvo.txt","w");
						char s[i][j];
							
								for(i=0;i<l;i++){
									for(j=0;j<c;j++){
										fprintf(arq,"%s",s[i][j]);
									}
								}
return 0;
}
