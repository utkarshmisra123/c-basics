#include <iostream>

using namespace std;

int main()
{
    int temp=0,j=0,i,n,cnt=0;
    char a[50],b[50];
    
    cout<<"enter n"<<endl;
       cin>>n;
       
       cout<<"enter string"<<endl;
    
    for(int i=0;i<n;i++)
       {
       std::cin >>a[i];
       }
       
      
     
     for(i=0;i<n;i++)
       {
           if(a[i]!='.')
           {
                cnt++;
                b[j]=a[i];
                j++;
           }
     else break;
       }
       
       j=0;
       a[n]='.';
       for(i=0;i<cnt+1;i++)
       {
           a[n+i+1]=b[j];
           j++;
       }
       
       for(i=0,j=i+cnt+1;i<n+cnt;i++,j++)
       {
               a[i]=a[j];
       }
        cout<<endl<<"count: "<<endl<<cnt<<endl;
          cout<<endl<<"string: "<<endl;
           for(i=0;i<n+cnt;i++)
       {
         cout<<a[i]<<endl;
     
       }
       return 0;
}
