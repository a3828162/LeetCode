class Solution {
public:
    
    unordered_map<int, int> dic;
    
    bool isHappy(int n) {
        
        if(n==1) return true;
        else if(dic.find(n)!=dic.end()) return false;
        
        int tmp = 0;
        dic[n]++;
        
        while(n!=0)
        {
            tmp+=pow(n%10,2);
            n /= 10;
        }
        
        return isHappy(tmp);
    }
};