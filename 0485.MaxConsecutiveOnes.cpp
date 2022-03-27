class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        bool isone = false;
        int result = 0, count = 0;
        
        for(auto &v:nums)
        {
            if(v == 1)
            {
                ++count;
                if(count > result) result = count;
            }
            else count = 0;
        }
        
        return result;
    }
};
