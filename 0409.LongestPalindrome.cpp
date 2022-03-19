class Solution {
public:
    int longestPalindrome(string s) {
        
        
        bool isone = false;
        int result = 0;
        
        unordered_map<char,int> dic;
        
        for(auto &c:s) dic[c]++;
        
        for(auto &[first,second]:dic) 
        {       
            result += (second/2)*2;
            if(result%2==0&&second%2==1) result++;
        }
        
        return result;
    }
};
