#include <stdio.h>
float soma (float x,float y){
		
		return x+y; 
		}
int main (){
	float x,y,r;
	scanf("%f%f",&x,&y);
	r= soma (x,y);	
	printf("%f + %f = %f\n",x,y,r);	
return r;
}
