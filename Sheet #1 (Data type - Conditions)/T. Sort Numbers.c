/****************** T. Sort Numbers ********************/


#include <stdio.h>

int main(void) {

	int a,b,c ;
	scanf_s("%i %i %i", &a,&b,&c);

	if (a < b && a < c)
	{
		printf("%i\n", a);
		if (b < c)
		{
			printf("%i\n", b);
			printf("%i\n", c);
		}
		else
		{
			printf("%i\n", c);
			printf("%i\n", b);
		}
	}

	if(b < a && b < c)
	{
		printf("%i\n", b);
		if (a < c)
		{
			printf("%i\n", a);
			printf("%i\n", c);
		}
		else
		{
			printf("%i\n", c);
			printf("%i\n", a);
		}
	}

	if (c < a && c < b)
	{
		printf("%i\n", c);
		if (a < b)
		{
			printf("%i\n", a);
			printf("%i\n", b);
		}
		else
		{
			printf("%i\n", b);
			printf("%i\n", a);
		}
	}
	
	printf("\n%i\n%i\n%i", a, b, c);
}