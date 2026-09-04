class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();

        int freq = 0, ans = 0;
        for(int i = 0; i < n; i++){
            if(freq == 0)   ans = arr[i];
            if(ans == arr[i]) freq++;
            else freq--;
        }

        return ans;
    }
};