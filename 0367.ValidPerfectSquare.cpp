class Solution {
public:
    bool isPerfectSquare(int num) {
        long long c = 1;
        
        while(1)
        {
            long long tmp = c*c;
            if(tmp>num) return false;
            else if(tmp==num) break;
            ++c;
        }
        
        return true;
    }
};