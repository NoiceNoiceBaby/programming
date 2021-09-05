// includes
#include <stdio.h>
#include <string.h>

// addition function
float add(float a, float b)
{
    // return calculation
    return(a+b);
}

// subtract function
float subtract(float a, float b)
{
    // return calculation
    return(a-b);
}

// multiply function
float multiply(float a, float b)
{
    // returns calculation
    return (a*b);
}

// divide function
float divide(float a, float b)
{
    // returns calculation
    return(a/b);
}

// main function
int main(void)
{
    // variable declaration 
    float num1;
    float num2;
    char operator[1];
    // print statement
    printf("enter first number:\n");
    // scan statement 
    scanf("%f", &num1);
    // print statement
    printf("enter operator:\n");
    // scan statement
    scanf("%s", operator);
    // print statement
    printf("enter second number:\n");
    // scan statement
    scanf("%f", &num2);

    // calculation 
    if (strcmp(operator, "+") == 0)
    {
        // print statement with addition function call
        printf("%f + %f = %f", num1, num2, add(num1, num2));
    }
    else if (strcmp(operator, "-") == 0)
    {
        // print statement with subtraction function call
        printf("%f - %f = %f", num1, num2, subtract(num1, num2));
    }
    else if (strcmp(operator, "*") == 0)
    {
        // print statement with mulitply function call
        printf("%f * %f = %f", num1, num2, multiply(num1, num2));
    }
    else if (strcmp(operator, "/") == 0)
    {
        // print statement with division function call
        printf("%f / %f = %f", num1, num2, divide(num1, num2));
    }
    // return
    return 0;
}