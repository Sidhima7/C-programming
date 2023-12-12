#include <stdio.h>
int main() 
{
    int number=10546, sum = 0;
    scanf("%d", &number);

    // Calculate the sum of digits
    while (number > 0) {
        sum += number % 10; // Add the last digit to sum
        number /= 10;       // Remove the last digit
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}
