// includes 
#include <stdio.h>

// addition function
float add(float a, float b)
{
    // print statement
    printf("addition selected....\n");
    // returns calculation
    return(a+b);
}

// subtraction function
float subtract(float a, float b)
{
    // print statement
    printf("subtraction selected....\n");
    // returns calculation
    return(a-b);
}

// multiplication function
float multiply(float a, float b)
{
    // print statement
    printf("multiplication selected....\n");
    // returns calculation
    return(a*b);
}

// division function
float divide(float a, float b)
{
    // print statement
    printf("division selected....\n");
    // returns calculation
    return(a/b);
}

// calculator function
int calculator(void)
{
    // variable declaration
    float num1, num2;
    int operation;
    // print and scan statements (inputting numbers)
    printf("enter first number:\n");
    scanf("%f", &num1);
    printf("enter second number:\n");
    scanf("%f", &num2);
    // print and scan statements (making menu)
    printf("which operation would you like to use?\n");
    printf("1.) +\n");
    printf("2.) -\n");
    printf("3.) *\n");
    printf("4.) /\n");
    scanf("%d", &operation);
    // switches 
    switch (operation)
    {
        // first case (addition)
        case 1:
            // print statement with addition function call
            printf("%f + %f = %f", num1, num2, add(num1, num2));
            break;
        // second case (subtraction)
        case 2:
            // print statement with subtraction function call
            printf("%f - %f = %f", num1, num2, subtract(num1, num2));
            break;
        // third case (multiplication)
        case 3 :
            // print statement with mulitplication function call
            printf("%f * %f = %f", num1, num2, multiply(num1, num2));
            break;
        // foruth case (division)
        case 4:
            // print statement with division function call
            printf("%f / %f = %f", num1, num2, divide(num1, num2));
            break;
        // defualt case (error)
        default:
            // print statement
            printf("error - exiting program....\n");
            break;
    }
    // return
    return 0;
}

// main function
int main(void)
{
    
    // variable declaration
    int input;
    // print and scan statements (making menu)
    printf("select from:\n");
    printf("1.) calculator\n");
    printf("2.) exit\n");
    scanf("%d", &input);
    // switches
    switch (input)
    {
        // first case 
        case 1:
            // runs calculator function
            calculator();
            break;
        // second case
        case 2:
            // print statement
            printf("exiting....\n");
            break;
        // default case
        default:
            // print statement
            printf("error - exiting\n");
    }
    // return
    return 0;
}