class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size()-1;
        int ans=0,ans2=0;
        for(int i=0; i<=n; i++)
        {
            ans= ans^nums[i];
        }
        for(int i=1; i<=n; i++)
        {
            ans2= ans2^i;
        }
        return ans^ans2;
    }
};
