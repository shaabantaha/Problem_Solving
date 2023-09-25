/******************Q. Coordinates of a Point ********************/


#include <stdio.h>

int main(void) {

	float X,Y;

	scanf_s("%f %f", &X ,&Y);
	 if (X == 0 && Y == 0)
	{
		printf("Origem");
	}
	 else if (X == 0 && Y!=0)
	 {
		 printf("Eixo Y");
	 }
	 else if (Y == 0 && X != 0)
	 {
		 printf("Eixo X");
	 }
	 else if (X > 0 && Y > 0)
	{
		printf("Q1");
	}
	else if(X < 0 && Y > 0)
	{
		printf("Q2");
	}
	else if (X < 0 && Y < 0)
	{
		printf("Q3");
	}
	else if (X > 0 && Y < 0)
	{
		printf("Q4");
	}

}