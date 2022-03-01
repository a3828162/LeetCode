class Solution {
public:
    int firstUniqChar(string s) {
        
        pair<int,int> dic[26] = {};
        
        for(int i=0;i<s.size();++i)
        {
            if(dic[s[i]-'a'].first==0) dic[s[i]-'a'].first++,dic[s[i]-'a'].second = i;
            else if(dic[s[i]-'a'].first>0) dic[s[i]-'a'].first++;
        }
        
        int result = INT_MAX;
                        
        for(auto &[first,second]:dic) if(first==1&&second<result) result = second;
        
        return (result==INT_MAX?-1:result);
    }
};