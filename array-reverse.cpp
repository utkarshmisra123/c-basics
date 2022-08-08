#include <iostream>

using namespace std;

int main()
{
    int temp=0,j,i,n;
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
     
       for(int i=0;i<n/2;i++)
       {
        temp=arr[i];      
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
       }
       cout<<endl;
       for(i=0;i<n;i++)
       {
       cout<<arr[i];
       }
       return 0;

}
