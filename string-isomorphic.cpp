#include <iostream>

using namespace std;

int main()
{
    int n;
    int flag=1;
    string str1,str2;
        int x=0;
       int d[50];
    cin>>n;
    for(int i=0;i<n;i++)
        {
            cin>>str1[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>str2[i];
        }
        
        for(int i=0;i<n;i++)
        {
            d[i]=str1[i]-str2[i];
        }   
        
        x=d[0];
        for(int i=0;i<n;i++)
        {
            if(d[i] != x)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"Strings are isomorphic";
        }
        else if(flag==0)
        {
            cout<<"Strings are not isomorphic";
        }
}
