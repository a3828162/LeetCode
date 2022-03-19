class Solution {
public:
    int countSegments(string s) {
        
        int res = 0;
        
        stringstream str(s);
        string tmp;
        
        while(str>>tmp) ++res;
        
        return res;
    }
};