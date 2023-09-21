/****************************P. First digit ! *************************/

#include  <stdio.h>


int main()
{
    /*for number consist of four digits*/

    int x;
    scanf("%i", &x);
/*
    x=x/1000;

    x%2==0 ? printf("EVEN") : printf("ODD");
    */

    /* for  any number */


    while(x)
    {
        x= x /10;
        if(x<=9)
        {
            x %2==0 ? printf("EVEN") : printf("ODD") ;
            break;
        }
    }

    return 0;
}
