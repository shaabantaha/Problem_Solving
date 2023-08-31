/**************E. Area of a Circle*******************/

#include <stdio.h>
#define PI 3.141592653
int main(void)
{
    float R;
    double Area;
    scanf_s("%f", &R);

    Area = PI * (R * R);

    printf("%.9f",Area);
    return 0;
}