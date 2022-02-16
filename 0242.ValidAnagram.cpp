class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char, int> dic1, dic2;
        
        for(int i=0;i<s.size();++i) ++dic1[s[i]];
        
        for(int i=0;i<t.size();++i) ++dic2[t[i]];
        
        for(auto &n : dic1) if(dic1[n.first]!=dic2[n.first]) return false;
        
        for(auto &n : dic2) if(dic1[n.first]!=dic2[n.first]) return false;
        
        return true;
    }
};