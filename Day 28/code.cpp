class Solution {
public:
    string predictPartyVictory(string senate) {
        
        int n = senate.length();
        
        queue<int> R;
        queue<int> D;
        
        for(int i = 0; i<n; i++) {
            if(senate[i] == 'R')
                R.push(i);
            else
                D.push(i);
        }
        
        while(!R.empty() && !D.empty()) {
            
            int R_idx = R.front(); R.pop();
            int D_idx = D.front(); D.pop();
            
            if(R_idx < D_idx) {
                R.push(R_idx+n);

            } else {
                D.push(D_idx+n);

            }
            
        }
        
        return R.empty() ? "Dire" : "Radiant";
        
    }
};
