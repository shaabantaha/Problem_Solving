// Disable warning C4996: Deprecated or unsafe function usage
// We are disabling this warning to use the scanf function, which is considered deprecated,
// but we are aware of the potential risks and have taken precautions.
#pragma warning(disable: 4996)

/*****************************D. Ali Baba and Puzzles *********************************/
#include <stdio.h>
//#include <limits.h>
 
int main(void) {
    
    long long int a, b, c;
    long long int d;

    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long result1 = (a * b) + c;
    long long result2 = (a * b) - c;
    long long result3 = a + (b * c);
    long long result4 = (a + b) - c;
    long long result5 = (a - b) + c;
    long long result6 = a - (b * c);


    if (result1 ==d || result2 ==d ||  result3 == d || result4 == d || result5 == d || result6 == d)
    {
        printf("YES");

    }
    else
    {
        printf("NO");
    }
    return 0;
}





