class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.empty()) return 0;
        int Nmax = nums[0];
        for(int i=1;i<nums.size();++i)
        {
            nums[i]=std::max(nums[i-1]+nums[i],nums[i]);
            if(nums[i]>Nmax) Nmax=nums[i];
        }
        
        return Nmax;
    }
};