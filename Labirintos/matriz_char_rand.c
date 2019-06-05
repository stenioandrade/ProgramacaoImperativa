#include <stdio.h>
#include <stdlib.h>
int main (){
	int i,j,r,x,y;
		while (1){	
			printf("Insira o numero de linhas seguido do numero de colunas da sua matriz rand char:\n");
			scanf("%d%d",&x,&y);
			char m[x][y];
			for (i=0;i<x;i++){
				for (j=0;j<y;j++){
					r = rand()%10;
					if (r==0) m[i][j]='.';
					if (r==1) m[i][j]='.';
					if (r==2) m[i][j]='.';
					if (r==3) m[i][j]='.';
					if (r==4) m[i][j]='.';
					if (r==5) m[i][j]='.';
					if (r==6) m[i][j]='#';
					if (r==7) m[i][j]='#';
					if (r==8) m[i][j]='#';
					if (r==9) m[i][j]='%';
					printf("%c ",m[i][j]);
				}
				printf("\n");
			}
		}
	return 0;
}
