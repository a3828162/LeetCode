class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> result;
        
        for(int i=1;i<=n;++i) i%3==0&&i%5==0 ? result.push_back("FizzBuzz") : i % 3 == 0 ? result.push_back("Fizz") : i%5==0 ? result.push_back("Buzz") : result.push_back(std::to_string(i));
        
        return result;
    }
};
