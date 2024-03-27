/* avg.c: Averages 2 integers */
#include <stdio.h>

int main() {
    int num1, num2;
    float sum;
    
    scanf("%d",&num1);
    scanf("%d",&num2);
    
    sum = num1 + num2;
    printf("The average of %d and %d is %.2f\n", num1, num2, sum/2);
    return 0;
}
