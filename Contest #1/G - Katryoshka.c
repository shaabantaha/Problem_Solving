// Disable warning C4996: Deprecated or unsafe function usage
// We are disabling this warning to use the scanf function, which is considered deprecated,
// but we are aware of the potential risks and have taken precautions.
#pragma warning(disable: 4996)

/*****************************G - Katryoshka *********************************/
#include <stdio.h>
#include <cmath>
//#include <limits.h>
//#include <math.h>
int main(void) {

    /*final solution */

#include <stdio.h>

    int main(void) {
        long long int eyes, mouths, bodies;
        long long int Katryoshka = 0;
        scanf("%lld %lld %lld", &eyes, &mouths, &bodies);

        long long int mn = eyes;
        if (mouths < mn) {
            mn = mouths;
        }
        if (bodies < mn) {
            mn = bodies;
        }

        Katryoshka += mn;
        eyes -= mn;
        mouths -= mn;
        bodies -= mn;

        mn = eyes / 2;
        if (bodies < mn) {
            mn = bodies;
        }

        Katryoshka += mn;

        printf("%lld", Katryoshka);

        return 0;
    }


    

    return 0;
}

/*********************second soultion**************************** */
/** error with fmin function because it dealing with floating point numbers
* 
* 
* #include <stdio.h>
#include <math.h>
 
int main(void) {
    long long int eyes, mouths, bodies;
    long long int Katryoshka = 0;
    scanf("%lld %lld %lld", &eyes, &mouths, &bodies);
 
    long long int mn = fmin(eyes, mouths);
    mn = fmin(mn, bodies);
 
    Katryoshka += mn;
    eyes -= mn;
    mouths -= mn;
    bodies -= mn;
 
    mn = fmin(eyes / 2, bodies);
    Katryoshka += mn;
 
    printf("%lld", Katryoshka);
 
    return 0;
}
*********************************/


/******************my first solution*********************** */
/* that have many error 
long long int eyes , mouths, bodies;
int Katryoshka = 0;
scanf("%lld %lld %lld", &eyes, &mouths, &bodies);

if (eyes == 0)
{
    Katryoshka=0;
}

else if (mouths > 0 && bodies >0)
{
    if (eyes <= mouths && eyes <= bodies)
    {
        Katryoshka = eyes;
        eyes = 0;
    }
    else if (mouths < eyes && mouths <= bodies)
    {
        Katryoshka = mouths;
        bodies -= mouths;
        eyes -= mouths;

    }
    else
    {
        Katryoshka = bodies;
        eyes -= bodies;
    }
}

if (eyes >1 && bodies >0)
{

    if (eyes / 2 < bodies)
    {
        for (int counter = 0; counter < eyes/2; counter++)
        {
            Katryoshka++;
        }
    }
}

    printf("%d", Katryoshka);

*/