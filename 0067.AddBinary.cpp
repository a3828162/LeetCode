class Solution {
public:
    string addBinary(string a, string b) {

        string ans;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        ans.assign(std::max(a.size(), b.size()) + 1, '0');

        for (int i = 0; i < std::max(a.size(), b.size()); ++i) i < min(a.size(), b.size()) ? ans[i] = (a[i] - '0') + (b[i] - '0') + '0' : (a.size() > b.size() ? ans[i] = a[i] : ans[i] = b[i]);
        for (int i = 0; i < ans.size(); ++i) if (ans[i] > '1') ans[i] -= 2, ans[i + 1] += 1;


        reverse(ans.begin(), ans.end());
        if (ans[0] == '0') ans.erase(ans.begin());
        return ans;
    }
};