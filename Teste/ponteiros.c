#include <stdio.h>
int main (int argc, char **argv){
int i;
int* p,*q;
i=6;
p = 5;//&i;
//*p = 9;
//q = p;
//*q = 8;
//printf("%d\n",i);
printf("%d\n",*p);
//printf("%p\n%p\n%p\n",p,q,&i);
return 0;
}
