class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int count = 0;
        
        for( int i=0; i < t.size(); ++i) if( s[count] == t[i] ) ++count;
        
        return count == s.size() ? true : false;
    }
};