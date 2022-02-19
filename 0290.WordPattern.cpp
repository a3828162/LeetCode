class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        map<char, string> dic;
        
        vector<string> words{};
        
        istringstream iss(s);
        
        string tmp;
        
        while ( std::getline( iss, tmp, ' ' ) )
        {
            words.push_back(tmp.c_str());
        }
        
        if(words.size()!=pattern.size()) return false;
        
        for(int i = 0;i<pattern.size();++i)
        {
            if(dic.find(pattern[i])==dic.end()) 
            {
                for(auto &[a,b]:dic) if(b==words[i]) return false;
                dic[pattern[i]] = words[i];
            }
            else if(dic[pattern[i]]!=words[i])
            {
                return false;
            }
        }
        
        return true;
    }
};