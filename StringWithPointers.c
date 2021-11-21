// To display characters of a string using pointers.
#include<stdio.h>

void printString(char pointerOfC[], int len)
{
    puts(pointerOfC);
} // printString

int main()
{
    char c[80];
    int i = 0, count = 1;
    printf("Enter the string:\n\t");
    
    // can also use gets(c) rather than this loop.
    while ((c[i] = getchar()) != '\n')
    {
        count++;
        i++;
    } // while

    printString(c, count);
} // main