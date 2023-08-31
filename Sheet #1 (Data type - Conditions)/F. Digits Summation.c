/****************************F. Digits Summation*************************/

#include  <stdio.h>


int main()
{
    unsigned long long x, y;
    scanf("%lld %lld", &x, &y);
    x %= 10;
    y %= 10;
    printf("%d", x + y);


    return 0;
}
