#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int n=100,i;
	int* v;
	v = (int *) malloc(sizeof(int)*n);
	for(i=0;i<100;i++){
		v[i] = i;
		v[i] = pow(v[i],2);
		printf("%d ao quadrado = %d\n",i,v[i]);
	}
	free(v);
	return 0;
}

