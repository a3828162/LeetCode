/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        if(guess(n) == 0) return n;
        
        long long l=1, r=n, m = 0;
        
        while(l<r)
        {
            m = (l+r)/2;

            if(guess(m)==1) l = m;
            else if(guess(m)==-1) r = m;
            else if(guess(m) == 0) break;
            
        }
        
        return m;
    }
};
