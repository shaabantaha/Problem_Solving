/****************** U. Float or int ********************/
#include <stdio.h>


int main(void) {
    double N; // Using double to read the number as it can handle both integers and floats
    scanf_s("%lf", &N);

    int intPart = (int)N; // Extract the integer part
    double decimalPart = N - intPart; // Extract the decimal part

    if (decimalPart == 0.0) {
        printf("int %d\n", intPart); // N is an integer
    }
    else {
        printf("float %d %.3lf\n", intPart, decimalPart); // N is a float, print with 3 decimal places
    }

    return 0;
}
