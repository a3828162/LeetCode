class Solution {
public:
    string convertToBase7(int num) {

        if(num==0) return "0";

        bool negative = num<0;
        if(num<0) num = abs(num);

        string answer;
        while(num!=0)
        {
            answer.insert(answer.begin(),'0'+(num%7));
            num/=7;
        }

        return (negative?"-"+answer:answer);
    }
};