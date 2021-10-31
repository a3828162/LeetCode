class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(),nums.end());
        bool a=false;
        for(auto t=nums.begin();t!=nums.end();++t)
        {
            while(t!=nums.end()&&*(t)==val) nums.erase(t),a=true;
            if(a)break;
        }
        
        return nums.size();
    }
};