/****************************H. Two numbers*************************/
/*
floor 10 / 3 = 3
ceil 10 / 3 = 4
round 10 / 3 = 3
*/

#include  <stdio.h>
#include  <math.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    float dev = (float)A / B;

    printf("floor %d / %d = %.f\n", A,B, floor(dev));
    printf("ceil %d / %d = %.f\n", A, B, ceil(dev));
    printf("round %d / %d = %.f\n", A, B, round(dev));

    return 0;
}
