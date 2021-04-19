#include <stdio.h>

void array_to_function(int variable[])
{
    int i;
    for(i = 0; i < 5; i ++)
    {
        printf("%d",variable[i]);
    }
}

void main()
{
    int array[5] = {1,2,3,4,5};

    array_to_function(array);
}