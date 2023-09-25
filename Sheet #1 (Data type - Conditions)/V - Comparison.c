#include <stdio.h>
 
int main(void) {
    int a, b;
    char s;
 
    // Read input in the specified format
    scanf("%d %c %d", &a, &s, &b);
 
    // Determine whether the comparison is "Right" or "Wrong"
    if ((s == '<' && a < b) || (s == '>' && a > b) || (s == '=' && a == b)) {
        printf("Right\n");
    }
    else {
        printf("Wrong\n");
    }
 
    return 0;
}