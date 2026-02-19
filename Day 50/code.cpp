class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();

        sort(begin(potions),end(potions));

        int maxPotionValue = potions[m-1];
        
        vector<int>ans;

        for(int i = 0 ; i < n ; i++){
            long long spell = spells[i];
            long long minPotion = ceil((1.0*success)/spell);

            if(minPotion >maxPotionValue){
                ans.push_back(0);
                continue;
            }
            int idx = lower_bound(begin(potions),end(potions),minPotion) - begin(potions);

            int cnt = m - idx;
            ans.push_back(cnt);
        }
        return ans;
    }
};
