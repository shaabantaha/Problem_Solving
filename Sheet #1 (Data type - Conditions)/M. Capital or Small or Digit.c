/****************************M. Capital or Small or Digit*************************/

#include  <stdio.h>


int main()
{
    char x;
    scanf("%c", &x);
	
	/*first solution using ternary operator*/
    ((x>=48&&x<=57) ? printf("IS DIGIT\n") :((x>=65&&x<=90)? printf("ALPHA\nIS CAPITAL\n"): printf("ALPHA\nIS SMALL\n") ) );


    /*second solution using if else */
    
    if(x>=48&&x<=57)
    {

        printf("IS DIGIT \n");
    }
    else if(x>=65&&x<=90)
    {
        printf("IS CAPITAL \n");

    }
    else if(x>=97&&x<=122)
    {
        printf("IS SMALL \n");
    }

    return 0;
}
