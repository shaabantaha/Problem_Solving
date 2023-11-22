/**************************** Y. Easy Fibonacci *********************************/
#include <stdio.h>
 
//#include <cmath>
//#include <limits.h>
#include <math.h>
 
int main(void) {
 
    unsigned int n,num;
    scanf("%d", &n);
    if (n == 0 || n == 1) {
        printf("%d",0);
    }
    else {
        long long int first = 0;
        long long int second = 1;
 
        printf("%lld %lld ",first,second);
        for (int i = 2; i < n; i++)
        {
            long long int third = first + second;
            printf("%lld ",third);
            first = second;
            second = third;
        }
 
 
    }
    return 0;
  }
 
 