class Solution {
public:
    char findTheDifference(string s, string t) {
        
        pair<int,int> dic[26] = {};
        
        if(s.size()>t.size())
        {
            for(int i=0;i<t.size();++i) 
            {
                dic[s[i]-'a'].first++;
                dic[t[i]-'a'].second++;
            }
            
            dic[s[s.size()-1]-'a'].first++;
            
            for(int i=0;i<26;++i) if(dic[i].first!=dic[i].second)return 'a'+i;
            
            return ' ';
        }
        else
        {
            for(int i=0;i<s.size();++i)
            {
                ++dic[s[i]-'a'].first;
                ++dic[t[i]-'a'].second;
            }
            
            dic[t[t.size()-1]-'a'].second++;
            
            for(auto&[first,second]:dic) cout<<first<<" "<<second<<endl;
            
            for(int i=0;i<26;++i) if(dic[i].first!=dic[i].second)return 'a'+i;
            
            return ' ';
        }
        

    }
};