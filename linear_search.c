#include<stdio.h>
// we need create an empty var and create an array
void main(){
    int empty = 0;
    int array[5]={11,22,33,44,55};
    for(int i=0;i<5;i++){
        if(array[i]==55){
            printf("%d",i);
            break;
        }
        else

        {
            continue;
        }
    }

}
