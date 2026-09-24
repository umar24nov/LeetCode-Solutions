class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();

        map<int, int> freq;

        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0){
                freq[nums[i]]++;
            }
        }

        

        int ans = -1;
        int maxFreq = 0;

        for(auto it : freq){
            if(it.second > maxFreq){
                maxFreq = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};