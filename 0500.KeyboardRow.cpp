class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> answer;
        string keyRow[3] = {"qwertyuiop","asdfghjkl","zxcvbnm"};
        int m[26] = {};

        for(int i=0;i<3;++i) for(int j=0;j<keyRow[i].size();++j) m[keyRow[i][j]-'a'] = i+1;

        for(int i=0;i<words.size();++i)
        {
            int check = m[(char)tolower(words[i][0])-'a'];
            for(int j=0;j<words[i].size();++j) if(m[(char)tolower(words[i][j])-'a']!=check) check = 0;
            if(check!=0) answer.push_back(words[i]);
        }
        
        return answer;
    }
};