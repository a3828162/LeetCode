class Solution {
public:
    bool isValid(string s) {
        
        stack<char> dic;

        for (char& a : s)
            if (a == '(' || a == '[' || a == '{') dic.push(a);
            else
            {
                if (!dic.empty() && (dic.top()-a==2||dic.top()-a==1)) { dic.pop(); continue; }
                return false;
            }

        return (dic.empty() ? true : false);
    }
};