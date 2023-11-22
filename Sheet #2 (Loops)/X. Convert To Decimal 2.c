
/**************************** X. Convert To Decimal 2 *********************************/
#include <stdio.h>

//#include <cmath>
//#include <limits.h>
#include <math.h>

int main(void) {

    unsigned int n,num;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&num);
        int p = 0;
        long long sum = 0;
        unsigned char rem = 0;
        while (num)
        {
            rem = num % 2;

            if (rem == 1)
            {
                sum += pow(2, p);
                p++;
            }
            num /= 2;

        }
        printf("%lld\n", sum);

    }



    return 0;
  }


