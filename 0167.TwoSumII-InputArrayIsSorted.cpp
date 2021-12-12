class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        const int n = numbers.size();
        for (int i = 0; i < n; ++i) {
            int l = i + 1;
            int r = n;
            int t = target - numbers[i];
            while (l < r) {
                int m = l + (r - l) / 2;
                if (numbers[m] == t)
                    return {i + 1, m + 1};
                else if (numbers[m] < t)
                    l = m + 1;
                else
                    r = m;
            }
        }
        return {};
    }
};