/**************************** V. PUM *********************************/
#include <stdio.h>

//#include <cmath>
//#include <limits.h>
//#include <math.h>

int main(void) {

    unsigned char n = 0;
    scanf("%d", &n);
    unsigned int counter=1;
    while (n)
    {
        for (int i = 1 ; i <= 3; i++)
        {
            printf("%d ", counter);
            counter++;
        }
        printf("PUM\n");
        n--;
        counter++;
    }

    return 0;
  }
