class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer(nums1.size());
        for(int i=0;i<nums1.size();++i)
        {
            bool find = false;
            int next_greater = -1;
            for(int j=0;j<nums2.size();++j)
            {
                if(nums1[i]==nums2[j])
                {
                    find = true;
                }
                if(find && nums2[j]>nums1[i])
                {
                    next_greater = nums2[j];
                    break;
                }
            }
            answer[i] = next_greater;
        }

        return answer;
    }
};