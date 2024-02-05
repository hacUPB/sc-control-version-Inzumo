#include <stdio.h>
#include <stdlib.h>

int main(int argc, char argv[]) {
    if (argc < 2) {
        fprintf(stderr,"Usage: program <number>\n");
        return 1;
    }

    int number = atoi(argv[1]); //Convert the console input argument to an integer

    /It must be verified that the entered number is greater than or equal to zero/
    if(number < 0)
    {
        fprintf(stderr,"The number must be greater than or equal to zero\n");
        return(1);
    }
    /Implement the function that calculates the factorial of the input argument/
        int factorial = 1;
    for (int i = 1; i <= number; i++) {
        factorial= i;
    }

    /Implement the function that calculates if the argument is a prime number/
int isPrime = 1;
    if (number <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    /Print the result/

    printf("Factorial of %d: %d\n", number, factorial);
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;

}