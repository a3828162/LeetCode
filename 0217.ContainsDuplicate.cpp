class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int,int> dic;
        
        for(auto &i : nums)
        {
            ++dic[i];
            if(dic[i]>1) return true;
        }
        
        return false;
    }
};