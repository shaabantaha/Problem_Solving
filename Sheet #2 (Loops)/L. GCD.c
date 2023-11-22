// Disable warning C4996: Deprecated or unsafe function usage
// We are disabling this warning to use the scanf function, which is considered deprecated,
// but we are aware of the potential risks and have taken precautions.
#pragma warning(disable: 4996)

/****************************L. GCD  *********************************/
#include <stdio.h>

//#include <cmath>
//#include <limits.h>
//#include <math.h>

int main(void) {

    unsigned int A = 0,B = 0, greatest;

    scanf("%d %d", &A,&B);

    int larg = A > B ? A : B;
    for (int i = 1; i <= larg; i++)
    {
        if ((A % i == 0) && (B % i == 0))
        {
            greatest = i;
        }
        else
        {

        }
    }
    printf("%d", greatest);

    return 0;
  }
