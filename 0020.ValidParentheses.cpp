class Solution {
public:
    bool isValid(string s) {
        stack<char> dic;

        for (char& a : s)
            if (a == '(' || a == '[' || a == '{') dic.push(a);
            else
            {

                if (!dic.empty() && ((a == ')' && dic.top() == '(') || (a == ']' && dic.top() == '[') || (a == '}' && dic.top() == '{'))) { dic.pop(); continue; }
                return false;
            }

        return (dic.empty() ? true : false);
    }
};