#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
	int i,j;
int ler (int linha, int coluna,char *matriz[linha][coluna] ,int *ponteiro ,int *ponteiro2,int *ponteiro3,int *ponteiro4){
	char nome[100];
	printf ("escreva o nome do arquivo. EX: matriz1\n");
	scanf("%s",nome);
	char txt[5]=".txt";
	char endereco[100] = "";
	FILE* arq;
	arq = fopen(strcat(endereco,strcat(nome,txt)),"r");
	if(arq==NULL) printf("arquivo inexistente!\n");
	    else {
		fscanf(arq,"%d %d%*c",&linha,&coluna);	
            if(linha >20 || linha <2 ||coluna >20 || coluna <2) {
		printf("matriz fora do limite[2<matriz<20]\n");
    	    }
			else {								
				while (!feof(arq)){
					for(i=0;i<linha;i++){
					   	for(j=0;j<coluna;j++){
						matriz[i][j] = fgetc(arq);
				     	fgetc(arq);
					   	}
				   	} 
				   	for(i=0;i<linha;i++){		
	                    for(j=0;j<coluna ;j++){ 
	                        if (matriz[i][j] == '@' ){
	                        *ponteiro = i;
	                    	*ponteiro2 = j;
	        	            printf ("%d %d \n ",*ponteiro,*ponteiro2);
			                }
			                if (matriz[i][j] == '$' ){
	                        *ponteiro3 = i;
	        	            *ponteiro4 = j;
	        	            printf ("%d %d \n ",*ponteiro3,*ponteiro4);
		                 	}
                        } 
                    }   
                } 
            } 
 fclose(arq);
    printf ("matriz lida com sucesso.\n");;
                }
		
return 0;
}
int escrever(int linha, int coluna,char* m[linha][coluna]){
	int i,j;
	FILE* arq;
	arq = fopen("eoq.txt","w");
	fprintf(arq, "%d %d\n", linha,coluna);
    	for(i=0;i<linha;i++){		
	        for(j=0;j<coluna ;j++){
		fprintf(arq, "%c ", m[i][j]); 	
            }
			 fprintf(arq,"\n");
    	} 
	fclose(arq);
    return 0;
}
int main(){
    int linha,coluna,*pont,*pont2,vinicial,hinicial,vfinal,hfinal,*pont3,*pont4;
	printf("escreva o numero de linhas e colunas.\n");
	pont = &vinicial;
	pont2 = &hinicial;
	pont3 = &vfinal;
	pont4 = &hfinal;
	scanf("%d %d",&linha,&coluna);
	char* matriz[linha][coluna]; 
	ler(linha,coluna,matriz,pont,pont2,pont3,pont4);
	escrever(linha,coluna,matriz);
	return 0;
}
