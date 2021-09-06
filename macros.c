// includes
#include <stdio.h>
// definitions
#define PI 3.14 

// main function
int main(void)
{
    // variable declaration
    float radius, area;
    // print and scan statements
    printf("enter radius...\n");
    scanf("%f", &radius);
    // calculating area
    area = PI*radius*radius;
    // printing area
    printf("area of circle = %f", area);
    // return
    return 0;
}
