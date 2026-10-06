class Solution {
public:
    int reverseDegree(string s) {
        

        int productSum = 0;


        for(int i = 0; i < s.length(); i++){
            int reverseValue = 'z' - s[i] + 1;
            productSum += reverseValue * (i + 1);
        }

        return productSum;
    }
};