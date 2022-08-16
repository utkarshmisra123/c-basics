class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    int x=0;
	    int cnt=0;
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        sum=sum+arr[i];
	        cnt++;
	    }
	    for(int i=n;i>0;i++)
	    {
	        if(sum%k == 0)
	        {
	            x=cnt;
	        }
	        else {
	            sum=sum=arr[i];
	            cnt--;
	    }
	    }
	    return x;
	}
};
