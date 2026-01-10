class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n = word1.size();
        int m = word2.size();
        int i  = 0 ;
        int j = 0;

        while(i<n && j<m){
            ans+=word1[i++];
            ans+=word2[j++];
        }
        ans.append(word1.substr(i));
        ans.append(word2.substr(j));
        
        return ans;
    }
};
