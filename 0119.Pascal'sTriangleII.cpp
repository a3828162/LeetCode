class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1, 1);
        for(int i=2; i<rowIndex+1; i++) for(int k=i-1; k>0; k--) ans[k] += ans[k-1];
        
        return ans;
    }
};