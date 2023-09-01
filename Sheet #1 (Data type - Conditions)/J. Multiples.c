/****************************J. Multiples*************************/


#include  <stdio.h>

int main()
{
    unsigned int A, B;
    scanf("%d %d", &A, &B);

    ((A%B==0) || (B % A == 0)) ? printf("Multiples") : printf("No Multiples");

    return 0;
}
