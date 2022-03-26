class Solution {
public:
    int findComplement(int num) {
        
        vector<int> t;
        
        while(num>0)
        {
            t.push_back(num%2);
            num/=2;
        }
        
        int result = 0;
        
        for(int i=0;i<t.size();++i) if(t[i]!=1) result += pow(2,i);
        
        return result;
    }
};