// Disable warning C4996: Deprecated or unsafe function usage
// We are disabling this warning to use the scanf function, which is considered deprecated,
// but we are aware of the potential risks and have taken precautions.
#pragma warning(disable: 4996)

/*****************************H. Data Type Guessing *********************************/
#include <stdio.h>

//#include <cmath>
#include <limits.h>
//#include <math.h>

int main(void) {
    long long int n, k, a,result ;
    scanf("%lld %lld %lld", &n, &k, &a);

    result = (n * k) / a;
    double result2 = (n * k) / a;
    double test = result2 - result;
    if (test > 0)
    {
        printf("double");
    }
    else if (result2 > 2147483647)
    {
        printf("long long");
    }
    else
    {
        printf("int");
    }
    return 0;
  }
/*code in c++*/
#include <iostream>
using namespace std;
int main() {
    double n, k, a;
    cin >> n >> k >> a;
    long long x = (k * n) / a;
    double q = (k * n) / a, test = q - x;

    if (test > 0)
    {
        cout << "double";
    }
    else if (q > 2147483647)
    {
        cout << "long long";
    }
    else
    {
        cout << "int";
    }
    return 0;
}
