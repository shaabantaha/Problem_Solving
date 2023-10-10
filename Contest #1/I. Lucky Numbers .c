// Disable warning C4996: Deprecated or unsafe function usage
// We are disabling this warning to use the scanf function, which is considered deprecated,
// but we are aware of the potential risks and have taken precautions.
#pragma warning(disable: 4996)

/*****************************I. Lucky Numbers *********************************/
#include <stdio.h>

//#include <cmath>
//#include <limits.h>
//#include <math.h>

int main(void) {

    unsigned char num = 0;
    scanf("%d", &num);

    int mod = num % 10;
    num /= 10;
    if ((mod % num == 0) || (num % mod ==0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
  }
