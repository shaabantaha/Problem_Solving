/*****************************A. Winter Sale   *********************************/
#include <stdio.h>

int main(void) {
    
    char Discount_Perc = 0;
    int Price_after = 0;

    scanf("%d %d", &Discount_Perc,&Price_after);

    char price_perc = 100 - Discount_Perc;
    float price_desc = (Price_after / (float)price_perc) * Discount_Perc;

    float price_before = price_desc + Price_after;
    printf("%.2f",price_before);
    return 0;
}


