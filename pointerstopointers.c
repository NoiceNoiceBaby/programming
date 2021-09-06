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

    // storing memory address of variable in the varpointer variable
    varpointer = &variable;

    // printing memory address of the varpointer variable
    printf("memory address of varpointer >>> %p\n", &varpointer);

    // printing memory address value stored in the varpointer variable
    printf("memory address stored in varpointer >>> %p\n", varpointer);

    // printing value accessed by varpointer
    printf("actual value accessed in varpointer >>> %d\n", *varpointer);

    // pointer to varpointer variable declaration 
    int **varpointerv2;

    // storing memory address of varpointer in the varpointerv2 variable
    varpointerv2 = &varpointer;

    // printing memory address of the varpointerv2 variable
    printf("memory address of varpointerv2 >>> %p\n", &varpointerv2);

    // printing memory address stored in varpointerv2 variable
    printf("memory address stored in varpointerv2 >>> %p\n", varpointerv2);

    // printing value accessesd by varpointerv2
    printf("actual value accessed in varpointerv2 >>> %d\n", **varpointerv2);

    // return
    return 0;
}