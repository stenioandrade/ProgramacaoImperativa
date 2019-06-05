#include <stdio.h>
void slectionsort(int v[], int n){
	int max, maxpos, i;
	while(n>1){
		max = v[0];
		maxpos = 0;
		for(i = 1; i < n; i++){
			if (v[i] > v[maxpos]){
				max = v[i];
				maxpos = i;
			}
		}
		v[maxpos] = v[n-1];
		v[n-1] = max;
		n--;
	}
}
int main(){
	int i,vet[] = {3,2,5,4,1};
	for(i=0;i<5;i++){
	printf("%d",vet[i]);
	} printf("\n");
	slectionsort(vet,5);
	for(i=0;i<5;i++){
	printf("%d",vet[i]);
	} printf("\n");
	return 0;
}
