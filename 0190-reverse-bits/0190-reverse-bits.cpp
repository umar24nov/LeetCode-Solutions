class Solution {
public:
    int reverseBits(int n) {

        int ans = 0;

        for(int i = 0; i < 32; i++){

            int bit = n & 1;   // last bit

            ans = ans << 1;    // space for new bit

            ans = ans | bit;   // place the bit

            n = n >> 1;        // remove last bit
        }

        return ans;
    }
};