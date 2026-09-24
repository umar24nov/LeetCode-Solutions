class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();

        if(n == 1 && nums[0] == 0){
            return 0;
        }

        for(int i = 0; i < n; i++){

            int sum = 0;

            while(nums[i] > 0){
                int digit = nums[i] % 10;
                nums[i] /= 10;

                sum += digit;
            }
            
            if(sum == i) return i;
        }

        return -1;
    }
};