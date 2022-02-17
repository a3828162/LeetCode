class Solution {
public:
    int addDigits(int num) {
        
        std::function<int (int)> addD = [&] (int i) 
        { 
            
            if(i>=0&&i<=9) return i;
            int result = 0;
            while(i!=0)
            {
                result+=i%10;
                i/=10;
            }
            return addD(result);
        };
        
        return addD(num);
    }
};