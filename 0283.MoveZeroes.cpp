class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       
        int numZero = 0;
        
        for(auto it = nums.begin();it<nums.end();)
        {
            if(!*it) nums.erase(it),++numZero;
            else ++it;
        }
        
        for(int i=0;i<numZero;++i) nums.push_back(0);
       
        return;
    }
};