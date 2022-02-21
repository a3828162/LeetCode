class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> result;
        
        result.push_back(0);
        if(n!=0) result.push_back(1);
        
        for(int i=2;i<=n;++i) result.push_back(result[int(i/2)]+result[i%2]);
        
        return result;
    }
};