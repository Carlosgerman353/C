#include <stdio.h>

int main(void) {
    printf("%6d,%4d", 86, 1040);  // 6 leading spaces, 4 spaces
    printf("%12.5e", 30.253);  
    printf("%.4f", 86.162);
    printf("%-6.2g", .0000009979); 

    return 0;
}