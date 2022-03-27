class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        
        for(auto it = s.begin();it!=s.end();)
        {
            if(*it=='-') s.erase(it);
            else *it = toupper(*it),++it;
        }
        
        for(int i = s.size()-k;i>0;i-=k) s.insert(s.begin()+i,'-');
        
        return s;
    }
};
