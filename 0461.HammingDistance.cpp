class Solution {
public:
    
    int hammingDistance(int x, int y) {
        
        int num = x^y,result = 0;
        
        
        while(num>0)
        {
            result += num%2;
            num/=2;
        }
             
        return result;
    }
};