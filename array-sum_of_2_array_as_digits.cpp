#include <iostream>

using namespace std;

int main()
{
    int arr1[5]={3,4,5,8,1};
    int arr2[5]={5,2,9,2,8};
    int sum[5];
    sum[0]=arr1[0]+arr2[0];
    for(int i=1;i<5;i++)
    {
        sum[i]=arr1[i]+arr2[i];
        if(sum[i-1]>9)
        {
            sum[i]++;
            sum[i-1]=sum[i-1]%10;
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<sum[i]<<endl;
        
    }
    
}
