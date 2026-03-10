class Solution {
public:
    int minFlips(int a, int b, int c) {
        int rst =((a|b)^c);
        int rst1 = (a&b);
        int rst2 =( rst & rst1) ;
        return __builtin_popcount(rst) + __builtin_popcount(rst2);
    }
};
