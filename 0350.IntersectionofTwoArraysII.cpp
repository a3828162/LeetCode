class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> result;
        unordered_map<int,int> dic;
        
        for(auto &i:nums1) dic[i]++;
        for(auto &i:nums2) if(dic[i]>0) dic[i]--,result.push_back(i);        
                
        return result;
    }
};