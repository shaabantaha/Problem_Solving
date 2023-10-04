// Disable warning C4996: Deprecated or unsafe function usage
// We are disabling this warning to use the scanf function, which is considered deprecated,
// but we are aware of the potential risks and have taken precautions.
#pragma warning(disable: 4996)

/*****************************C. Next Alphabet *********************************/
#include <stdio.h>
//#include <limits.h>

int main(void) {
    
    char letter;
    scanf("%c", &letter);

    if (letter < 122)
    {
        printf("%c", ++letter);
    }
    else {
        printf("%c", 97);
    }
    return 0;
}





