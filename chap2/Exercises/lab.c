#include <stdio.h>
// #include <math.h>

int main() {
    float num;
    printf("Enter a floating-point number: ");
    scanf("%f", &num);
    printf("Original num: %f\n", num);
    int round = (num - (int) num) >= 0.5 ? num + 1 : num;
    printf("Rounded num: %d\n", round);
}
