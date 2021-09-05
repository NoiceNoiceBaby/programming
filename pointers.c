// includes
#include <stdio.h>

// main function
int main(void)
{
    // variable declaration
    int variable = 33; 

    // pointer variable declaration
    int *varpointer;

    // printing memory address of the integer variable 
    printf("memory address of variable >>> %p\n", &variable);

    // printing actual value of the integer variable
    printf("actual value of variable >>> %d\n", variable);

    // storing address of variable in a pointer variable
    varpointer = &variable;

    // printing memory address of the varpointer variable
    printf("memory address of varpointer >>> %p\n", &varpointer);

    // printing memory address value stored in the varpointer variable
    printf("memory address stored in varpointer >>> %p\n", varpointer);

    // value accessed by varpointer
    printf("actual value stored in varpointer >>> %d\n", *varpointer);

    // return
    return 0;
}