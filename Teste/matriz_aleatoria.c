#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int random () {
	return rand()%6+1;
}
int main(){ 
	srand(time(NULL));
    int x, z, m, n, o, i, j, k, l, y;

    scanf("%d %d %d",&m, &n, &o);
    
	int matriz[m][n];
	int matriz2[n][o];
	int matriz3[m][o];
	
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
	     matriz[i][j]=random ();
	     
	     printf("%d ",matriz[i][j]);
	     
		}
		printf("\n");
	}

	printf("\n\n");
	
	
	for (k=0;k<n;k++){
		for (l=0;l<o;l++){
	     matriz2[k][l]=random();
	     
	     printf("%d ",matriz2[k][l]);
	     
		}
		printf("\n");
	}
	printf("\n\n");
		for (x=0;x<m;x++){
			for (z=0;z<o;z++){
				matriz3[x][z]=0;
	    	 	for(y=0;y<n;y++){
	    	 		matriz3[x][z] += matriz[x][y]*matriz2[y][z];
				 }
	     	 printf("%d ",matriz3[x][z]);
		}
		printf("\n");
	}
	return 0;
}
