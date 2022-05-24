#include <stdio.h>
/* Formats product information entered by the user */

int main(void) {
    int item, purchase, price, month, day, year;
    float unit_price; 
    printf("Enter item number: ");
    scanf("%d", &item);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d /%d /%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$%-5.2f\t%d/%d/%d\n", item, unit_price, month, day, year);
    
    return 0;
}

// Alert (bell)    \a
// Backspace    \b
// New line    \n 
// Horizontal \t