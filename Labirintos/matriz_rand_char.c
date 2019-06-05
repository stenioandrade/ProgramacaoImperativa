#include <stdio.h>
#include <stdlib.h>
int printm(int x,int y){
		int i,j,r;
			char m[x][y];
				for(i=0;i<x;i++){
					for(j=0;j<y;j++){
						r = rand()%10;
							if(r==0)m[i][j]='.';
							if(r==1)m[i][j]='.';
							if(r==2)m[i][j]='.';
							if(r==3)m[i][j]='.';
							if(r==4)m[i][j]='.';
							if(r==5)m[i][j]='.';
							if(r==6)m[i][j]='#';
							if(r==7)m[i][j]='#';
							if(r==8)m[i][j]='#';
							if(r==9)m[i][j]='%';
						printf("%c ",m[i][j]);
					}
					printf("\n");
				}				
return 1;
}

int main(){
	int x,y;
	printf("Insira o numero de linhas da sua matriz: ");
	scanf("%d",&x);
	printf("Agora insira o numero de colunas: ");
	scanf("%d",&y);
	printm (x,y);
return 0;
}
