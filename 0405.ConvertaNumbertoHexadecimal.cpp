class Solution {
public:
    string toHex(int num) {
        
        string HEX[16] = {"0","1","2","3","4","5","6","7","8","9","a","b","c","d","e","f"};
        
        if (num == 0) return "0";
        
        string result;
        int count = 0;
        
        while (num && count++ < 8) {
            result = HEX[(num & 0xf)] + result;
            num >>= 4;
        }
        
        return result;
    }
};