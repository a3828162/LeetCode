class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*unordered_map<int,int> dic;
        for(auto& t:nums) dic[t]++;
        for(const auto& s : dic) if(s.second==1) return s.first;
        
        return 0;*/
        int ans = 0;
        for(int i = 0 ; i < nums.size();++i){
            ans ^= nums[i];
        }
        
        return ans;
    }
};