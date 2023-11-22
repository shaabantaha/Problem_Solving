/****************************P. Shape1*********************************/
#include <stdio.h>

//#include <cmath>
//#include <limits.h>
//#include <math.h>

int main(void) {

    unsigned char n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k <= n; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
  }

