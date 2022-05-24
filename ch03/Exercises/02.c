#include <stdio.h>

int main(void) {
    int a, b, c, d;
    // exponential notation; left-justified in a field of size 8; one digit after the decimal point.
    printf("%8.1e", a);
    
    // exponential notation; right-justified in a field of size 10; six digits after the decimal point.
    printf("%10.6e", b);

    // Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point.
    printf("%8.3f", c);
    
    // Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.
    printf("%-6.0f", d);

    return 0;
}