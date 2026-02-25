class Solution {
public:
    void solve(int start , int k ,int target , vector<int>& temp , vector<vector<int>>& ans){
        if(target == 0 && temp.size() == k){
            ans.push_back(temp);
            return;
        }
        if(target < 0 || temp.size() > k){
            return;
        }
        for(int i = start ; i <= 9 ; i++){
            if(i > target) break;
            temp.push_back(i);
            solve(i+1,k ,target-i,temp,ans);
            temp.pop_back();
        }

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp ;
        vector<vector<int>> ans;
        solve(1,k,n,temp,ans);
        return ans;
    }
};
