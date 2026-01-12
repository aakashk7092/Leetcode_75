class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0, lp = 0 , rp = height.size()-1;
        while(lp<rp){
            int l = rp - lp;
            int ht = min (height[lp],height[rp]);
            int currWater = l * ht;
            maxWater = max(maxWater,currWater);
            if (height[rp] < height[lp]){
                rp --;
            }
            else{
                lp++;
            }
        }
        return maxWater;
        
    }
};
