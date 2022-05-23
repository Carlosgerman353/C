#include <stdio.h>

int main(void) {
    int x;
    
    printf("Enter a value for x: ");
    scanf("%d", &x);

    int evaluate = (((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
    printf("%d\n", evaluate);
    
    return 0;
}