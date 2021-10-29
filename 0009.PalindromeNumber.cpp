class Solution {
public:
    bool isPalindrome(int x) {

        int _ = []() { ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); return 0; }();

        // solution 1
        /*if(x<0) return false;
        else
        {
            int t[10]={},size=0;
            while(x!=0) t[size++]=x%10,x/=10;

            for(int i=0;i<size/2;++i)  if(t[i]!=t[size-1-i]) return false;
            return true;
        }*/

        // solution 2 refer to online

        if (x < 0) return false;
        else
        {
            int originX = x;
            long long reverseX = 0;
            while (x) reverseX = (reverseX * 10) + x % 10, x /= 10;

            return originX == reverseX;
        }
    }
};