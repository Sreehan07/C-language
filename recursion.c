
// recursion: recursion is the process in which you call a function
// again and again in its own definition untill and unless a condition is 
// true

// factorial: 5*4*3*2*1 [n * n-1!]
// ! means executing code untill and unless value becomes 1

// recusion will only work on funtion with return and parameter values
int fact(int number)
{
    if(number == 1)
    {
        // if number becomes 1 then stop the story
        
        // to stop a story which is going on and on with the help of 
        // recursion we use 'return' to stop that story instead of 'break'

        return number;
    }
    else
    {
        // if number not equal 1 then continue story

        return number*fact(number-1);
    }
}