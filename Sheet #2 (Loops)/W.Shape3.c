/**************************** W. Shape3 *********************************/
#include <stdio.h>

//#include <cmath>
//#include <limits.h>
//#include <math.h>

int main(void) {

    int n = 1;
    scanf("%d", &n);

    /*for pirnt the first pyramids*/

    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k < n; k++)
        {
            printf(" ");
        }

        for (int j = 1; j < i * 2; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    /*for pirnt the second pyramids*/

    for (int i = n; i> 0; i--)
    {
        for (int k = i; k < n; k++)
        {
            printf(" ");
        }

        for (int j = 1; j < i * 2; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
  }


