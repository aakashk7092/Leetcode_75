class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double windowSum = 0.0;
        for(int i = 0 ; i < k ; i++){
            windowSum += nums[i];
        }
        double maxAvg =windowSum/k;

        for(int i = k ; i <n ;i++){
            windowSum += nums[i];

            windowSum -= nums[i-k];

            maxAvg = max(maxAvg,windowSum/k);
        }
        return maxAvg;
    }
};
