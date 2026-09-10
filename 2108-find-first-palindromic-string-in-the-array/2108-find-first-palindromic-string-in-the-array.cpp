class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n  = words.size();

        for(int i = 0; i < n; i++){
            string org = words[i];

            int st = 0; 
            int end = words[i].length() - 1;


            while(st <= end){
                swap(words[i][st], words[i][end]);
                st++, end--;
            }

            if(words[i] == org) return org;
        }

        return "";
    }
};