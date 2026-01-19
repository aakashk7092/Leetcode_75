class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr = 0 ;
        int maximum  = 0;
        for(int num:gain){
            curr+=num;
            maximum = max(curr,maximum);
        }
        return maximum;
    }
};
