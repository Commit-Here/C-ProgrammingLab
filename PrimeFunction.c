// Check whether a number is prime or not
#include<stdio.h>

// to check whether number is prime or not.
int checkPrime(int num)
{
    if (num % 2 == 0)
        return 1;
    else 
        return 0;
} // checkPrime

int main()
{
    int givenNum;
    printf("Please Enter An Integer:\n");
    scanf("%d", &givenNum);

    if (checkPrime(givenNum))
        printf("%d is a Even Number.\n", givenNum);
    else 
        printf("%d is a Odd Number.\n", givenNum);
} // main