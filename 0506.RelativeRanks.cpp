class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int, string> m;
        vector<string> answer;
        vector<int> tmp = score;
        sort(tmp.begin(),tmp.end(),std::greater<int>());
        for(int i=0;i<tmp.size();++i)
        {
            if(i==0) m[tmp[i]] = "Gold Medal";
            else if(i==1) m[tmp[i]] = "Silver Medal";
            else if(i==2) m[tmp[i]] = "Bronze Medal";
            else m[tmp[i]] = std::to_string(i+1);
        }
        for(auto &i:score) answer.push_back(m[i]);

        return answer;
    }
};