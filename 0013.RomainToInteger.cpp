class Solution {
public:
    int romanToInt(string s) {

        int _ = []() { ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); return 0; }();

        int dic[30] = {};
        dic['I' - 'A'] = 1, dic['V' - 'A'] = 5, dic['X' - 'A'] = 10, dic['L' - 'A'] = 50, dic['C' - 'A'] = 100, dic['D' - 'A'] = 500, dic['M' - 'A'] = 1000;

        int ans = 0;

        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] != '"')
            {
                if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')) ans += dic[s[i + 1] - 'A'] - dic[s[i] - 'A'], i++;
                else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) ans += dic[s[i + 1] - 'A'] - dic[s[i] - 'A'], i++;
                else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')) ans += dic[s[i + 1] - 'A'] - dic[s[i] - 'A'], i++;
                else ans += dic[s[i] - 'A'];
            }
        }

        //cout<<ans;
        return ans;
    }
};