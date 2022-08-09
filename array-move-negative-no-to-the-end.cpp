#include <iostream>

using namespace std;

int main()
{
    int temp=0,j=0,i,n,x,count=0,k=0;
    int arr[50],b[50];
    
    cout<<"enter n"<<endl;
       cin>>n;
    
    for(int i=0;i<n;i++)
       {
       std::cin >>arr[i];
       }
       j=0;
     for(i=0;i<n;i++)
       {
        if(arr[i]<0)
        {
            b[j]=i;
            j++;
            count++;
        }
       }
  cout<<endl;
  j=0;
  for(i=count;i>0;i--)
       {
           temp=arr[b[j]];
           arr[b[j]]=arr[n-i];
           arr[n-i]=temp;
           j++;
       }
       
           cout<<endl;
           for(j=0;j<count;j++)
           {
               cout<<b[j]<<endl;
           }
          
          for(i=0;i<n;i++)
       {
           cout<<arr[i];
       }
       
      
      
       
       return 0;
}
