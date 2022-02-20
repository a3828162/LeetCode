class NumArray {
public:
    int * v;
    
    NumArray(vector<int>& nums) {
        
        v = new int[nums.size()]();
        int s = 0;
        for(auto &i : nums) v[s++] = i;
    }
    
    int sumRange(int left, int right) {
        
        int result = 0;
        for(int i=left;i<=right;++i) result += v[i];
        
        return result;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */