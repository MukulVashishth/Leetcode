class Solution {
public:
    int hammingDistance(int x, int y) {
        int res = x ^ y;
        
        int cnt = __builtin_popcount(res);
        
        return cnt;
    }
};