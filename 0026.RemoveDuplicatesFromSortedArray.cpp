class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        for(auto t=nums.begin();t!=nums.end();++t)  while(t+1!=nums.end()&&*t==*(t+1)) nums.erase(t+1);
        
        return nums.size();
    }
};