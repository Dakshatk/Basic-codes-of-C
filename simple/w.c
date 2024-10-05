#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, sum, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    number = abs(number);

    while (number >= 10) {
        sum = 0;
        
        while (number != 0) {
            digit = number % 10;
            sum += digit;
            number /= 10;
            printf("%d\n",number);
        }
        number = sum;
         printf("%d\n",number);
    }

    printf("The final is: %d\n", number);

    return 0;
}