class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left  = 0 ; 
        int maxLen = 0;
        int cnt0 = 0;
        for(int right = 0 ; right< nums.size();right++){
            if(nums[right] == 0){
                cnt0++;
            }
            while(cnt0 >k){
                if(nums[left] == 0){
                    cnt0--;
                }
                left++;
            }
            maxLen = max(maxLen,right-left+1);
        }
        return maxLen;
    }
};
