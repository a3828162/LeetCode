class Solution {
public:
    int strStr(string haystack, string needle) {
        //if((haystack.empty()&&needle.empty())||(!haystack.empty()&&needle.empty())) return 0;

        /*int ans = -1;
        for (int i = 0; i < haystack.size(); ++i)
        {
            if (haystack[i] == needle[0])
            {
                int j = 0;
                for (j = 0; j < needle.size() && j + i < haystack.size(); ++j)
                {
                    if (needle[j] != haystack[j + i]) break;
                }
                if (j == needle.size())
                {
                    ans = i;
                    break;
                }
            }
        }

        return ans;*/
        return haystack.find(needle);
    }
};