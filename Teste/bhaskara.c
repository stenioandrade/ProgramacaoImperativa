#include <stdio.h>
#include <math.h>
int return_1 (float n){
		if(n<0) return 1;
		else return 0;  
		}

int return_2 (float n){
		if(n==0) return 1;
		else return 0;  
		}
		
float delta (float a,float b,float c){
	return b*b-4*a*c;
	}

int main ()
{
	float a,b,c,x,y,d;
	scanf("%f%f%f",&a,&b,&c);
	while (return_2 (a))
	{
		printf("O primeiro valor tem que ser diferente de zero!\nReinsira o primeiro valor: ");
		scanf("%f",&a);
	}
		d = delta (a,b,c); 
		if (return_1(d)) printf("as raizes nao estao definidas nos reais!\n");
		else
		{
			x = ((-b+sqrt(d))/2*a);
			y = ((-b-sqrt(d))/2*a);
			printf("as raizes sao: %f e %f\n",x,y);
		}
return 1;
}
