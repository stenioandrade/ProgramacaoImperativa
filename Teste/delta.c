#include <stdio.h>
float delta (float a,float b,float c){
	float d;
	d= (b*b-4*a*c);
	return d;
	}
int main (){
	float A,B,C,D;
scanf("%f%f%f",&A,&B,&C);
D = delta (A,B,C);
printf("%f",D);
return 1;
}
