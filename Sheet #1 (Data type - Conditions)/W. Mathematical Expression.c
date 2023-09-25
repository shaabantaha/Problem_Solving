// Disable warning C4996: Deprecated or unsafe function usage
// We are disabling this warning to use the scanf function, which is considered deprecated,
// but we are aware of the potential risks and have taken precautions.
#pragma warning(disable: 4996)

/******************************W. Mathematical Expression *********************************/
#include <stdio.h>

int main(void) {
    int a =0, b=0, c=0;
    char s,q;

    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    if (s=='+') {
        if (a + b == c)
            printf("Yes\n");
        else
            printf("%d", a + b);
    }
    else if (s == '-')
    {
        if (a - b == c)
            printf("Yes\n");
        else
            printf("%d", a - b);
    }
    else if (s == '*')
    {
        if (a * b == c)
            printf("Yes\n");
        else
            printf("%d", a * b);
    }
    return 0;
}
