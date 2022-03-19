class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> res;
        
        bool* dic = new bool[nums.size()+1]();
        
        for(auto &i:nums) dic[i] = true;
        
        for(int i=1;i<=nums.size();++i) if(dic[i]==false) res.push_back(i);
        
        return res;   

    }
};