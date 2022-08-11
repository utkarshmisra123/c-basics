class Solution{
  public:
    int isdivisible7(string num){
        int n=num.length();
        int sum=0;
        int ans=0;
        int x,y;
        for(int i=0;i<n-1;i++)
        {
            if(num[i]=='1')
            {
                sum=sum+1;
        }
        else if(num[i]=='2')
            {
                sum=sum+2;
        }
        else if(num[i]=='3')
            {
                sum=sum+3;
        }
        else if(num[i]=='4')
            {
                sum=sum+4;
        }
        else if(num[i]=='5')
            {
                sum=sum+5;
        }
        else if(num[i]=='6')
            {
                sum=sum+6;
        }
        else if(num[i]=='7')
            {
                sum=sum+7;
        }
        else if(num[i]=='8')
            {
                sum=sum+8;
        }
        else if(num[i]=='9')
            {
                sum=sum+9;
        }
        }
        if(num[n]='1')
            {
                y=1;
        }
        if(num[n]='2')
            {
                y=2;
        }
        if(num[n]='3')
            {
                y=3;
        }
        if(num[n]='4')
            {
                y=4;
        }
        if(num[n]='5')
            {
                y=5;
        }
        if(num[n]='6')
            {
                y=6;
        }
        if(num[n]='7')
            {
                y=7;
        }
        if(num[n]='8')
            {
                y=8;
        }
        if(num[n]='9')
            {
                y=9;
        }
        
       
        x=2*y-sum;
        
        
        if((x%7==0)||(x=0))
        {
            ans=1;
        }
        else ans=0;
    return ans;
        
    }
};
