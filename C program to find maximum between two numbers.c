// C program to find maximum between two numbers

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("%d is maximum No. ", num1);
    }
    else if (num1 == num2)
    {
        printf("Boths numbers are same.");
    }
    else
    {
        printf("%d is maximum number. ", num2);
    }

    return 0;
}