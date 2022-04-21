class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        
        int rul = 0;
        
        for(int i=0;i<timeSeries.size();++i)       
            i == timeSeries.size() - 1 ? rul += duration : timeSeries[i+1] - timeSeries[i] < duration ? rul += timeSeries[i+1] - timeSeries[i] : rul += duration;
        
        return rul;
    }
};
