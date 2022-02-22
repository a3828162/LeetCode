class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> result;
        unordered_map<int,int> dic;
        
        for(auto &i:nums1) dic[i]=1;
        for(auto &i:nums2) if(dic[i]==1) dic[i]=2;    
        for(auto &[l,r]:dic) if(r==2) result.push_back(l);
                
        return result;
    }
};