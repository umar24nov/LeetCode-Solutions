class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n = nums.size();

        int i = 0, j = n - 1;
        int pos = n - 1;

        vector<int> result(n);

        while(i <= j){


            if(abs(nums[i]) >= abs(nums[j])){
                result[pos] = nums[i] * nums[i];
                i++;
                pos--;
            }
            else if(abs(nums[i]) < abs(nums[j])){
                result[pos] = nums[j] * nums[j];
                j--;
                pos--;
            }
        }

        return result;
    }
};