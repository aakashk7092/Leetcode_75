class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        int i = 0 ;
        int  j = 0;
        int cnt = 0;
        while( j < m && i < n){
            if(s[i] == t[j]){
                i++;
                cnt++;
            }
            j++;
        }
        return cnt == n ? true :false;;
    }
};
