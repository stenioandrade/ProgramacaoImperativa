#include <stdio.h>
#include <stdlib.h>
void bubblesort2(int vet[],int n){
	int troca , i , temp;
	int ntroca=0 , ncomp=0;
	do{
		troca = 0;
		for(i = 0 ; i < n - 1 ; i++){
			
			ncomp++;
			if(vet[i]> vet[i+1]){
				temp = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = temp;
				troca = 1;
				ntroca++;
			}
		}n--;
	}while (troca);
	printf("comp: %d\n",ncomp);
	printf("trocas: %d\n",ntroca);
}


int main (){
	int n,i;
		printf("Insira o tamnho do vetor: ");
		scanf("%d",&n);
	int v[n];
		for (i=0;i<n;i++){
			printf("insira o %d valor: ",i+1);
			scanf("%d",&v[i]);
		}
		printf("vetor original: ");
		for (i=0;i<n;i++){
			printf("%d ",v[i]);
		}printf("\n");
		
		bubblesort2(v,n);
		
		printf("vetor ordenado: ");
		for (i=0;i<n;i++){
			printf("%d ",v[i]);
		}printf("\n");
		
	system("PAUSE");
	return 0;
}
