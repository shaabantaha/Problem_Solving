/****************************N. Char *************************/

#include  <stdio.h>


int main()
{
    char x;
    scanf("%c", &x);

    x>=65&&x<=90 ? printf("%c", x+32) : printf("%c",x-32);

    return 0;
}
