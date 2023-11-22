// Disable warning C4996: Deprecated or unsafe function usage
// We are disabling this warning to use the scanf function, which is considered deprecated,
// but we are aware of the potential risks and have taken precautions.
#pragma warning(disable: 4996)

/*****************************G. Factorial *********************************/
#include <stdio.h>

//#include <cmath>
//#include <limits.h>
//#include <math.h>

int main(void) {

    int t=0 , n=0;
    long long fact = 1;
    scanf("%d",&t);

    while (t--)
    {

        fact = 1;
        scanf("%d", &n);

        for (int k = 1; k <= n; k++)
        {
            fact *= k;


        }
        printf("%lld\n",fact);
    }
    return 0;
  }


