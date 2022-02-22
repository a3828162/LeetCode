class Solution {
public:
    string reverseVowels(string s) {

        int i = 0,j=s.size()-1;
        
        auto isV = [](auto c) 
        {
             return c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u' ||c=='A' ||c=='E' ||c=='I' ||c=='O' ||c=='U';
        };
        
        while(i<j)
        {
            while(!isV(s[i])&&i<j) ++i;
            while(!isV(s[j])&&i<j)--j;                        
            
            std::swap(s[i++],s[j--]);
        }
        
        return s;
    }
    

};