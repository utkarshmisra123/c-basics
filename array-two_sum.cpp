class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        int sum;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                sum=nums[i]+nums[j];
                if(sum==target)
                {
                    ans.clear();
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
                
            }
        }
         
        return ans;
    }
};
