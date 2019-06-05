#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv){
	int v[45],i;
	int *k = v;
	for(i=0;i<45;i++){
		k[i] = rand()%10;
		printf("posicao %d = %d\n",i+1,v[i]);
	}
	return 0;
}
