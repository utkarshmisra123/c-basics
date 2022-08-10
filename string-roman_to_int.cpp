class Solution {
  public:
    int romanToDecimal(string &str) {
        int ans=0;
        char x;
       
    
        int n=str.length();
        for(int i=0;i<str.length();i++)
        {
            
            x=str[i];
            switch(x){
            case 'I':
            ans=ans+1;
            break;
            case 'V':
            ans=ans+5;
            break;
            case 'X':
            ans=ans+10;
            break;
            case 'L':
            ans=ans+50;
            break;
            case 'C':
            ans=ans+100;
            break;
            case 'D':
            ans=ans+500;
            break;
            case 'M':
            ans=ans+1000;
            break;
            
        }}
        for(int i=0;i<n;i++)
        {
            if((str[i]=='V' || str[i]=='X') && str[i-1]=='I')
            ans=ans-2;
            if((str[i]=='L' || str[i]=='C') && str[i-1]=='X')
            ans=ans-20;
            if((str[i]=='D' || str[i]=='M') && str[i-1]=='C')
            ans=ans-200;
        }
        return ans;
    }
};
