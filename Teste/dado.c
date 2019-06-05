#include <stdio.h>
#include <conio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>//necessário p/ função time()
int dado (){
	srand(time(NULL)); 
	return rand() %6 +1;
	}
	int main(){
		int r;
	r=dado();
	printf("%d\n",r);
	return 1;
	}
