class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        int l=0; 
        for(int r=1; r<nums.size(); r++)
        {
            if(nums[r]!=nums[l])
            {
                l++;
                nums[l]=nums[r];
            }
        }
        return l+1;
    }
};
