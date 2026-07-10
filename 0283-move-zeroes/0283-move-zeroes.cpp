class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nz = 0; // nonZero
        int z = 0; //  zero

        while(nz < nums.size()){
            if(nums[nz] != 0){
                swap(nums[nz], nums[z]);
                nz++, z++; 
            } else nz++;
        }
    }
};