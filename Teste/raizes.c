#include <stdio.h>
#include <math.h>
int negativo (float n){
	if(n<0) return 1;
	else return 0;  
}

int nulo (float n){
	if(n) return 0;
	else return 1;  
}
		
float delta (float a,float b,float c){
return b*b-4*a*c;
}

float raizx (float a,float b, float c){
		float d = delta (a,b,c); 
		if (negativo(d)) return 0;
		else return ((-b+sqrt(d))/2*a);
}

float raizy (float a,float b, float c){
		float d = delta (a,b,c); 
		if (negativo(d)) return 0;
		else return (-b-sqrt(d))/2*a;
}

int main(){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
		while (nulo (a)){
			printf("O primeiro valor tem que ser diferente de zero!\nPorque senao sera uma funcao de grau 1!\nReinsira o primeiro valor: ");
			scanf("%f",&a);
		}
	float x = raizx(a,b,c);
	float y = raizy(a,b,c);
		if (x&&y) printf("As raizes sao: %f e %f !\n",x,y);
		else printf("O seu delta e negativo!\nAs raizes nao estao definidas nos reais!\n");
return 0;
}

