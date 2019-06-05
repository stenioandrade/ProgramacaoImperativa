#include <stdio.h>
void troca (int* a,int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
return ;
}

int main (){
int x=3,y=5;
troca (&x,&y);
printf("x=%d e y=%d\n",x,y);
return 0;
}
