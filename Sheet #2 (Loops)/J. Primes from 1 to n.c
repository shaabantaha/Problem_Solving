/*****************************J. Primes from 1 to n  *********************************/
#include <stdio.h>

//#include <cmath>
//#include <limits.h>
//#include <math.h>

int main(void) {

    unsigned int num = 0;
    scanf("%d", &num);
    
    for (int k = 2; k <= num; k++)
    {
        char flag = 1;
        for (int i = 2; i <= k / 2; i++)
        {
            if (k % i == 0)
            {
                flag = 0;
            }
            else{}
           
        }
        if (flag) {
            printf("%d ", k);
        }
        
    }
    return 0;
  }


