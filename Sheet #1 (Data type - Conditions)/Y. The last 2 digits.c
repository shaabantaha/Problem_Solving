// Disable warning C4996: Deprecated or unsafe function usage
// We are disabling this warning to use the scanf function, which is considered deprecated,
// but we are aware of the potential risks and have taken precautions.
#pragma warning(disable: 4996)

/*****************************Y. The last 2 digits *********************************/
#include <stdio.h>

int main(void) {
    int a, b, c, d, result;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    
    int newA = a % 100;
    int newB = b % 100;
    int newC = c % 100;
    int newD = d % 100;

    result =( newA * newB * newC * newD);

    if (result % 100 <= 9)
    {
        printf("0");
        printf("%d",result%100);

    }
    else
    {
        printf("%d", result % 100);
    }
    return 0;
}





