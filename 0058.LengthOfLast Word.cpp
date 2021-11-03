class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        bool a=false;
        for(int i=s.size()-1;i>=0;--i)
        {
            while(i>=0&&s[i]!=' ') ans++,a=true,i--;
            if(a) break;
        }
        
        return ans;
    }
};