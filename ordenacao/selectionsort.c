#include <stdio.h>
#include <stdlib.h> 
void selectionsort (int vet[],int n){
	int max,max_pos,i,j,ncomp=0,ntroca=0;
	for(i=n;i>1;i--){
		max=vet[0];
		max_pos=0;
		for(j=1;j<i;j++){
			ncomp++;
			if (vet[j]>max){
				max=vet[j];
				max_pos=j;
				ntroca++;
			}
		}
		vet[max_pos]=vet[i-1];
		vet[i-1]=max;
	}
	printf("comp: %d\n",ncomp);
	printf("troca: %d\n",ntroca);

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
		
		selectionsort(v,n);
		
		printf("vetor ordenado: ");
		for (i=0;i<n;i++){
			printf("%d ",v[i]);
		}printf("\n");
		
	system("PAUSE");
	return 0;
}

