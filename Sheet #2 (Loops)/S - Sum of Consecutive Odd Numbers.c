/**************************** S. Sum of Consecutive Odd Numbers *********************************/
#include <stdio.h>

//#include <cmath>
//#include <limits.h>
//#include <math.h>

int main(void) {

    int t = 0;
     int x, y;
    scanf("%i", &t);
    long int sum = 0;

    int small ,big;
    for (int i = 1; i <= t; i++)
    {
        sum = 0;

        scanf("%i %i", &x, &y);


        if(y>x)
        {
            big =y ;
            small = x;

        }
        else{
          small =y ;
          big = x;
        }
        for (int c = small+1; c < big; c++)
        {
            if (c % 2 != 0)
            {
                sum += c;
            }
          //  else{}
        }
        printf("%ld\n", sum);
    }

    return 0;
  }
