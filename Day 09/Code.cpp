class Solution {
public:
    int compress(vector<char>& chars) {
        int idx = 0 ; 
        int n =  chars.size();
        for(int i = 0 ; i < n ; i++){
            int count = 0 ;
            char ch = chars[i];
            while(i<n && ch == chars[i]){
                count++;
                i++;
            }
            if(count == 1){
                chars[idx++]=ch;
            }
            else{
                chars[idx++] = ch;
                string s = to_string(count);
                for(char val:s){
                    chars[idx++]=val;
                }
            }
            i--;
        }
        chars.resize(idx);
        return idx;
        
    }
};
