/****************************L. The Brothers*************************/

#include <stdio.h>

int main() {
    char F1[100];
    char S1[100];
    char F2[100];
    char S2[100];

   // printf("Enter the first and last names for the first person: ");

    /*We can use `sizeof` in `scanf` to specify the maximum buffer size and prevent buffer overflow, ensuring that the input does not exceed the allocated memory for the array.*/
	scanf("%s %s", F1, S1);

    //printf("Enter the first and last names for the second person: ");
	scanf("%s %s", F2, S2);

    //printf("Null Terminator of S1: %c\n", S1[strlen(S1)]);
    // Now, you have the first and last names of two people in F1, S1, F2, and S2
    

    char* S1Ptr = &(S1[0]);
    char* S2Ptr = &(S2[0]);
    unsigned char IsTrue = 1;

    while (*S1Ptr != '\0')
    {
        if (*S1Ptr == *S2Ptr)
        {
            S1Ptr++;
            S2Ptr++;
        }
        else
        {
            IsTrue = 0;
            break;
        }
    }

    if (IsTrue)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }
    return 0;
}

/*another solution */

#include <stdio.h>
#include <string.h>

int main() {
    char F1[100], S1[100];
    char F2[100], S2[100];

    // Read input for the first person
    scanf("%s %s", F1, S1);

    // Read input for the second person
    scanf("%s %s", F2, S2);

    // Compare the second names
    if (strcmp(S1, S2) == 0) {
        printf("ARE Brothers\n");
    } else {
        printf("NOT\n");
    }

    return 0;
}
