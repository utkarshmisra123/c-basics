#include <iostream>

using namespace std;

int main()
{
    int temp=0,j=0,i,n,min,ind;
    int arr[50];
    cin>>n;
    
    for(int i=0;i<n;i++)
       {
       std::cin >>arr[i];
       }
       
       
       for(i=0;i<n;i++)
       {
       cout<<arr[i];
       }
       
      
     
  
   for (i = 0; i < n - 1; i++) 
   {
      min = i;
      for (j = i + 1; j < n; j++)
      {
          if (arr[j] < arr[min])
      {
      min = j;
      temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
      }
      }}
       cout<<endl;
       for(i=0;i<n;i++)
       {
       cout<<arr[i];
       }
       return 0;
}
