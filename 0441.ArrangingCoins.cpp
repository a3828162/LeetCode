class Solution {
public:
    int arrangeCoins(int n) {
        
        int res = 0,i=0;
        
        while(n>0)
        {
            n-=(++i);
            ++res;                
        }
        
        return n==0?res:res-1;
    }
};