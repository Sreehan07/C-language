#include <stdio.h>

// scope: Where will c language see for the variables

// variables which are created outside all the functions are called
// global variables

a = 10;

void functions()
{
    
    printf("%d not in main function",a);
}

void main()
{
    printf("%d in the main function",a);

    functions(); 
}