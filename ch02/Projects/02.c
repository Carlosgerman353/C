#include <stdio.h>
#define PI 3.14159
#define FRAC (4.0f/3.0f)

int main(void) {
    int radius = 10;
    float vol = FRAC * (PI * (radius * radius * radius));
    printf("This is the volume of sphere with a 10-meter radius%f\n", vol);

    return 0; 
}