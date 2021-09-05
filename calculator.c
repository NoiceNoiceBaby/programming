// includes
#include <stdio.h>

// main function
int main(void)
{
    // variable declaration 
    float num1; // first number in calculation
    float num2; // second number in calculation 
    char operator; // operator of calculation 
    // print and scan statements
    printf("enter first integer:\n");
    scanf("%f", &num1);
    printf("enter a second number:\n");
    scanf("%f", &num2);
    printf("enter an operator:\n");
    scanf(" %c", &operator);
    // if and else calculation
    if (operator == '+')
    {
        // prints calculation
        printf("%f add %f = %f", num1, num2, num1+num2);

    }
    else if (operator == '-')
    {
        // prints calculation
        printf("%f subtracted by %f = %f", num1, num2, num1-num2);
    }
    else if (operator == '*')
    {
        // prints calculation
        printf("%f multiplied by %f = %f", num1, num2, num1*num2);
    }
    else if (operator == '/')
    {
        // prints calculation
        printf("%f divided by %f = %f", num1, num2, num1/num2);
    }
    // return
    return 0;
}