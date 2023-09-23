/******************Q. R. Age in Days ********************/


#include <stdio.h>

int main(void) {

	long int days =0;
	scanf_s("%ld", &days);
	
	printf("%d years\n", days / 365);
	days %= 365;

	printf("%d months\n", days / 30);
	days %= 30;

	printf("%d days\n", days);

}