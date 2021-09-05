// includes
#include <stdio.h>

// main function 
int main(void)
{
    // variable declaration
    int userInput;
    // print statement (asking for a inetger)
    printf("print enter a integer:\n");
    // scan statement (reading the inputed integer)
    scanf("%d", &userInput);
    int x = userInput;
    // print statement (outputting the inputed integer)
    printf("your number was: %d", x);
    // return
    return 0;
}