#include <iostream>

using namespace std;

int main()
{
    int temp=0,j=0,i,n,count=0,k;
    int arr[50];
    
    cout<<"enter n"<<endl;
       cin>>n;
    
    for(int i=0;i<n;i++)
       {
       std::cin >>arr[i];
       }
       cout<<"enter k"<<endl;
       cin>>k;
       
       for(i=0;i<n;i++)
       {
       cout<<arr[i];
       }
       
      
     
  
   for (i = 0; i < n; i++) 
   {
       if(arr[i]==k)
       {
       count++;
       }
   }
       cout<<endl;
       cout<<"frequency is "<<count<<endl;
      
      
       
       return 0;
}
