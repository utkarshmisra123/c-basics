#include <iostream>

using namespace std;

int main()
{
    int temp=0,j=0,i,m,n,x,count=0;
    int a[50],b[50],c[50],d[50];
    
    cout<<"enter n"<<endl;
       cin>>n;
       
       cout<<"enter m"<<endl;
       cin>>m;
    
    for(int i=0;i<n;i++)
       {
       std::cin >>a[i];
       }
       for(int i=0;i<m;i++)
       {
       std::cin >>b[i];
       }
      int k=0,l=0;
     
     for(i=0;i<n;i++)
       {
            int flag=0;
           for(j=0;j<m;j++)
           {
               if(a[i]==b[j])
               {
                   c[k]=a[i];
                   k++;
                flag=1;
                
               }
           }
               if(flag=0) 
               {
                   d[l]=a[i];
                l++;
               }
           
       }
     
            cout<<l<<endl;
          cout<<endl<<"intersection: "<<endl;
          for(i=0;i<k;i++)
       {
           cout<<c[i];
       }
       cout<<endl<<"rest: "<<endl;
        for(i=0;i<l;i++)
       {
           cout<<d[i];
       }
       
       return 0;
}
