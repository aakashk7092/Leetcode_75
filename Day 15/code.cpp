class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int n = s.size();
        int ans = 0 ;
        int cnt = 0 ;

        for(int i = 0 ; i < n ; i++){
            if(isVowel(s[i])) cnt++;

            if(i >= k && isVowel(s[i-k])) cnt --;

            ans = max(cnt ,ans);
        }
        return ans;
    }
};
