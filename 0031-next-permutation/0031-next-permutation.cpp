class Solution {
public:

    void reverse(vector<int>& arr, int start, int end){

        while(start < end){
            swap(arr[start], arr[end]);
            start++, end--;
        }

        return;
    }


    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
    
        // Step -1 : Find Pivot Index

        int pvtIdx  = -1;

        for(int i = n - 2; i >= 0; i--){
            if(arr[i] < arr[i + 1]){
                pvtIdx = i;
                break;
            }
        }

        if(pvtIdx == -1) {
            reverse(arr, 0, n - 1);
            return;
        }

        // Step - 2 : sort array after pivot from {pvtIdx + 1 to arr.size() - 1}

        reverse(arr, pvtIdx + 1, n - 1);

        // Step - 3 : Find just greater element Index

        int j = -1;
        for(int i = pvtIdx + 1; i < n; i++){
            if(arr[i] > arr[pvtIdx]){
                j = i;
                break;
            }
        }

        // Step - 4 : swap  (pvtIdx, pvtIdx+1)

        swap(arr[pvtIdx], arr[j]);

        return;
    }
};