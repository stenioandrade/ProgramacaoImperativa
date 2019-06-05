#include <stdio.h>

int main(int argc, char **argv)
{
	int x = 0;
	printf("%d\n",x);
	x++;
	printf("%d\n",x);
	int *p = &x;
	*p = 2;
	printf("%d\n",*p);
	return 0;
}

