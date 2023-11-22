
/**************************** U. Some Sums *********************************/
#include <stdio.h>

//#include <cmath>
//#include <limits.h>
//#include <math.h>

int main(void) {

    long long int n, a, b, sum=0,rem,sum_num=0;
    scanf("%lld %lld %lld", &n, &a, &b);

    while (n)
    {
        int temp = n;

        while (temp)
        {
            rem = temp % 10;
            temp /= 10;
            sum_num += rem;
        }
        if (sum_num >= a && sum_num <= b)
        {
            sum += n;
        }
        sum_num = 0;
        n--;

    }
    printf("%d", sum);


    return 0;
  }



