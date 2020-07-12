class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32>bs {n};
        int low = 0 , high=31;
        while(low<high)
        {
            int temp = bs[low];
            bs[low++] = bs[high];
            bs[high--] = temp;
        }
        return bs.to_ulong();
    }
};