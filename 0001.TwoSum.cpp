#include<hash_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int _ = []() { ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); return 0; }();

        /*vector<int> ans; // solution 1 O(n^2)
        bool a=false;

        for(int i=0;i<nums.size();++i)
        {
            if(a) break;
            for(int j=i+1;j<nums.size();++j)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans.push_back(i),ans.push_back(j);
                    a=true;
                    break;
                }
            }

        }
        return ans;*/

        /*map<int, int> dic; 
        vector<int> ans;

        for (int i = 0; i < nums.size(); dic[nums[i]] = i, ++i)
            if (dic.find(target - nums[i]) != dic.end()) { ans.push_back(dic[target - nums[i]]), ans.push_back(i); break; }*/
        
        __gnu_cxx::hash_map<int, int> dic; // solution 2 O(n)
        vector<int> ans;

        for (int i = 0; i < nums.size(); dic[nums[i]] = i, ++i)
            if (dic.find(target - nums[i]) != dic.end()) { ans.push_back(dic[target - nums[i]]), ans.push_back(i); break; }
        return ans;
    }
};