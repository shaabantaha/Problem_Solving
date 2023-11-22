/*****************************D. Fixed Password*********************************/
#include <stdio.h>

//#include <cmath>
//#include <limits.h>
//#include <math.h>

int main(void) {

   // const int correctPas = 1999;
    int enteredPas = 0;

    do {
        scanf("%d", &enteredPas);

        if (enteredPas != 1999)
        {
            printf("Wrong\n");
            continue;
        }
        else
        {
            printf("Correct\n");
            break;
        }
    } while (enteredPas != 1999);

    return 0;
  }


