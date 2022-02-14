class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
           
        vector<string> result;
        
        if(nums.empty()) return result;
        
        long long Fnum=nums[0],Lnum=nums[0];
        
        for(int i=0;i<nums.size();i++)
        {
            if(i+1==nums.size())
            {
                if(Fnum==Lnum) result.push_back(std::to_string(Fnum));
                else result.push_back(std::to_string(Fnum)+"->"+std::to_string(Lnum));
                
                break;
            }
            
            if(nums[i+1]-Lnum!=1)
            {
                if(Fnum==Lnum) result.push_back(std::to_string(Fnum));
                else result.push_back(std::to_string(Fnum)+"->"+std::to_string(Lnum));
                
                Fnum = nums[i+1];
                Lnum = nums[i+1];
            }
            else
            {
                Lnum = nums[i+1];
            }
        }
        
        return result;
    }
};