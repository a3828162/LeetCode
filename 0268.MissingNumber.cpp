class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        std::sort(nums.begin(),nums.end());
        
        int result = 0;
        
        for(int i=0;i<nums.size();++i)
        {
            if((i+1!=nums.size()&&nums[i+1]-nums[i]>1)||(i+1==nums.size()&&result==0&&nums[0]==0))
            {
                result = nums[i] + 1;
                break;
            }
        }
        
        return result;
    }
};