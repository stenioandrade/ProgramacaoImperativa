#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dos.h>
int main (){
	int i, j,x;
	char m[20][20];
	for (i=0;i<20;i++){
		for (j=0;j<20;j++){
			x = rand() %10;
			if (x==0) m[i][j]='.';
			if (x==1) m[i][j]='.';
			if (x==2) m[i][j]='.';
			if (x==3) m[i][j]='.';
			if (x==4) m[i][j]='.';
			if (x==5) m[i][j]='.';
			if (x==6) m[i][j]='.';
			if (x==7) m[i][j]='#';
			if (x==8) m[i][j]='#';
			if (x==9) m[i][j]='%';
			printf("%c ",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
