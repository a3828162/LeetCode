class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num == 1) return false;
        int answer = 1;
        for(int i=2 ; i <= int(sqrt(num)) ; ++i) if(num % i == 0) answer += i+num/i;
        return answer == num;
    }
};