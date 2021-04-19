#include <stdio.h>


// if you want to return multiple values you use pointers or arrays 

void return_multiple_values(int array[])
{
    int temp;

    temp = array[0];
    array[1] = array[0];
    array[0] = temp;

}

void main()
{
    int array[2] = {2,5};
    return_multiple_values(array);

    for(int i = 0; i < 2; i ++)
    {
        array[i];
    }
}