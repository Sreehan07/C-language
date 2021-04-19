int main() 
{
  //1.we need to sort the values of given array list.
  //2.now we gonna take the smallest value from the list.
  //3.we need to swap the smallest element to first index 
  //now the remaining element will goto the smallest element index place
  //4.now repeat the procress from two index till array as sorted
  int arr[5]={99,35,55,44,22};
  
  int lol=0;
  for(int i=0;i<5;i++)
  {
    for(int j=i;j<5;j++)
    {
      if(arr[j] < arr[lol])
      {
        lol=j;
      }
    }
    int temp=arr[lol];
    arr[lol]=arr[i];
    arr[i]=temp;
  }
  
  
  
  return 0;
}
