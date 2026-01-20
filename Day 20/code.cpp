class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans(2);
        unordered_set<int>n1;
        unordered_set<int>n2;
        for(int num1:nums1){
            n1.insert(num1);
        }
        for(int num2:nums2){
            n2.insert(num2);
        }
        for(auto it : n1){
            if(n2.find(it) == n2.end()){
                ans[0].push_back(it);
            }
        }
        for(auto it : n2){
            if(n1.find(it) == n1.end()){
                ans[1].push_back(it);
            }
        }
        return ans;
        
    }
};
