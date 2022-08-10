class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {   
string res = arr[0];
        string ans = "";
        
        for(int i = 0 ; i < res.size() ; i++ ){
            
            int j = 0 ;
            
            for(; j<n; j++){
                
                if(res[i] != arr[j][i])
                  break;
            }
            
            if(j == n)
                ans += res[i];
            else
                break;
        }
        
        if(ans.empty())
            return "-1";
            
        return ans;
}
