#include <stdio.h>

/* Diplays the numbers in a 4 by 4 arrangement */

int main(void) {
    int one, two, three, four, five, six, seven, eight, nine, ten,
    eleven, twelve, thirteen, fourteen, fifteen, sixteen;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
    &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, 
    &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);

    printf("%d %d %d %d\n", one, two, three, four); 
    printf("%d %d %d %d\n", five, six, seven, eight);
    printf("%d %d %d %d\n", nine, ten, eleven, twelve);
    printf("%d %d %d %d\n", thirteen, fourteen, fifteen, sixteen);
    
    int row_sums_1 = one + two + three + four; 
    int row_sums_2 = five + six + seven + eight;
    int row_sums_3 = nine + ten + eleven + twelve;
    int row_sums_4 = thirteen + fourteen + fifteen + sixteen;

    int colums_sum_1 =  one + five + nine + thirteen;
    int colums_sum_2 = two + six + ten + fourteen; 
    int colums_sum_3 = three + seven + eleven + fifteen; 
    int colums_sum_4 = four + eight + twelve + sixteen;

    int diagonal_sum_1 = one + six + eleven + sixteen; 
    int diagonal_sum_2 = four + seven + ten + thirteen; 



    printf("Row sums: %d %d %d %d\n", row_sums_1, row_sums_2, row_sums_3, row_sums_4); 
    printf("Column sums: %d %d %d %d\n", colums_sum_1, colums_sum_2, colums_sum_3, colums_sum_4);
    printf("Diagonal sums: %d %d\n", diagonal_sum_1, diagonal_sum_2);

    return 0;
}