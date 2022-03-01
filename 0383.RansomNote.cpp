class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int dic1[26] = {},dic2[26] = {};
        
        for(auto &s : ransomNote) { dic1[s-'a']++;}
        for(auto &s : magazine) dic2[s-'a']++;   
        for(int i=0;i<26;++i) if( dic1[i]!=0 && dic1[i]>dic2[i] ) return false;
        
        return true;
    }
};
