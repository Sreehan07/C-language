#include <stdio.h>

// function: functions are a part of code which can
// called again and again whenever we want

// functions are used to solve a problem


// 1) FUNCTION WITH PARAMETER [WHENEVER YOU WANT TO INSERT VALUE FROM ANOTHER OR SOMEOTHER
// PLACE IN C LANGUAGE]

// Q/A 1) solve or find area of square using function [s*s]

// a) create a function which takes side of square as parameter
void area_of_square(int s)
{
    // we created a function 
    // It takes s value from main function as a parameter

    // then it calculates s value
    printf("%d",s*s);
}

// b) run the function in main function
// void main()
// {
//     int s = 10;
//     // calling a function
//     area_of_square(s);
// }

// 2) FUNCTION WITH RETURN VALUE [WHENEVER YOU WANT TO GET SOMETHING FROM A FUNCTION]

// Q/A 2) area of square

int area_of_square2()
{
    int s = 20;
    return s*s;

}

// void main()
// { 
//     // cheap method !!!!!!!!!!!!!!!!!!
//     // int answer;
//     // answer = area_of_square2();
//     // printf("%d",answer);  
//     // danger method!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//     printf("%d",area_of_square2());
// }

// 3) FUNCTION WITH PARAMETER AND RETURN VALUE

// estimate price of car by its age [age * 10000]
int car(int age)
{
    return age * 10000;
}

// void main()
// {
//     printf("%d",car(2));
// }


// CALL BY VALUE and CALL BY REFERENCE

// swapping of two numbers with function has 2 types

// call by value
// 1) function
// 2) swap it
// 3) they don't get swapped in main function

// call by reference 
// 1) function 
// 2) swap it using pointers
// 3) they get swapped in main also

// call by value
void call_by_value(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void call_by_reference(int *a, int *b)
{
    int temp;
    temp = *a;
    *b = *a;
    *a = temp;
}

void main()
{
    int a = 10, b = 20;
    call_by_value(a, b);
    call_by_reference(&a,&b);
    
}
