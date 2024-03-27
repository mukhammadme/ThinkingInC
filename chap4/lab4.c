#include <stdio.h>

int main() {
    int n;
    int odds = 0;
    int evens = 0;

    while (n != 0)
    {
        printf("Enter an integer (0 to quit): ");
        scanf("%d", &n);
        switch (n % 2)
        {
        case 1:
            odds += n;
            break;
        
        default:
            evens += n;
            break;
        }
    }
    printf("Sum of evens: %d\n", evens);
    printf("Sum of odds: %d\n", odds);
    return 0;
}