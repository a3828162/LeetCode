class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()) return true;
        stack<char> tmp;
        
        for(int i=0;i<s.size();++i) if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')) tmp.push(s[i]);
        

        for(int i=0;i<s.size();++i) 
        {
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
            {
                if(tolower(s[i])!=tolower(tmp.top())) return false;
                tmp.pop();
            }
        }
        
        return true;
    }
};