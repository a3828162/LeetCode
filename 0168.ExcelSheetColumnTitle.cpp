class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = "";
        while (columnNumber) {
            if (columnNumber % 26 == 0) {
                res += 'Z';
                columnNumber -= 26;
            } else {
                res += columnNumber % 26 - 1 + 'A';
                columnNumber -= columnNumber % 26;
            }
            columnNumber /= 26;
        }
        reverse(res.begin(), res.end());
        return res;  
    }
};