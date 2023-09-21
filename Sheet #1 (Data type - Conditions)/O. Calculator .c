/****************************O. Calculator *************************/

#include  <stdio.h>


int main()
{
    int a ,b;
    char s;
    scanf("%i %c %i", &a, &s, &b);


    s=='+'?printf("%i",a+b) :
    s=='-' ? printf("%i",a-b):
    s=='*' ? printf("%i",a*b) :
    printf("%i",a/b);

    return 0;
}
