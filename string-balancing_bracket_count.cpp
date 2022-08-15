class Solution{
  public:
    int findIndex(string str) {
        // Your code goes here
        int n= str.length();
        int index=0;
        int cnt1=0,cnt2=0;
        int x=0,y=0;
        
        for(int i=0;i<n;i++)
        {
            if(str[i] == '(' )
            {
                index++;
                
            }
            else if(str[i] == ')' )
            {
                index--;
                
            }
        }
        x=abs(index);
        if(index>0)
        {
            cout<<"There are "<<x<<" ( "<<" extra";
        }
        else if(index<0)
        {
            cout<<"There are "<<x<<" ) "<<" extra";
        }
        
        else if(index==0){
            cout<<"Brackets are balanced";
        }
    }
};
