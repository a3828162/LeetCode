class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int *dp = new int[amount+1];
        for(int i=0;i<amount+1;++i) dp[i] = 10000000;
        dp[0] = 0;
        
        for(int i=0;i<coins.size();++i)
        {
            for(int j = coins[i];j<=amount;++j)
            {
                dp[j] = std::min(dp[j],dp[j-coins[i]]+1);
            }
        }
        
        
        return dp[amount] <  10000000 ? dp[amount] : -1 ;
    }
};