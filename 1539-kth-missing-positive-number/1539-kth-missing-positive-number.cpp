class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();

        int st = 1;
        int count = 0;

        for (int i = 0; i < arr.size(); i++) {

            while (st < arr[i]) {
                count++;
                if (count == k) {
                    return st;
                }

                st++;
            }

            if(st == arr[i]){
                st++;
            }
            
        }

        while(count < k){
            count++;

            if(count == k){
                return st;
            }

            st++;
        }

        return -1;
    }
};