class Solution {
public:
    
    int thirdMax(vector<int>& nums) {
        
        set<int,greater<int>> s;
        
        for(auto &v:nums) s.insert(v);
        
        return s.size()>2?(*(++(++s.begin()))):(*s.begin());
    }
    
};
