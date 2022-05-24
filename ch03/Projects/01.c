#include <stdio.h>

/* Accepts date and displays it in the form yyyymmdd */

int main(void) {
    int month, day, year; 

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %.4d%.2d%.2d ", year, month, day);

    return 0; 
}