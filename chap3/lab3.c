#include <stdio.h>

int main() {
    int nums[3];
    int oddSum = 0, evenSum = 0;
    int length = sizeof(nums) / sizeof(nums[0]);
    
    for (int i = 0; i < length; i++)
    {
        printf("Please enter an integer number: ");
        scanf("%d", &nums[i]);

        if (nums[i] & 1) {
            oddSum += nums[i];
        } else {
            evenSum += nums[i];
        }
    }
    printf("The sum of evens: %d\n", evenSum);
    printf("The sum of odds: %d\n", oddSum);
    return 0;
}