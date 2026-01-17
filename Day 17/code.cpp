class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0 ;
        int  j = 0 ;
        int lastZero_Idx =-1;
        int ans = 0 ;

        while(j < nums.size()){
            
            if(nums[j] == 0){
                i = lastZero_Idx +1;
                lastZero_Idx = j;
            }
            ans = max(ans,j-i);
            j++;
        }
        return ans;
    }
};
