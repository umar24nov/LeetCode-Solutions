class Solution {
public:
    bool isPalindrome(string s) {
        
        string ans = "";

        for(int i = 0; i < s.length(); i++){

            // Conveting all characters to lowercase
            s[i] = tolower(s[i]);


            // Skipping all non-alphanumeric characters
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || s[i] >= '0' && s[i] <= '9'){
                ans.push_back(s[i]);
            }
        }

        string original = ans;

        int n = ans.length();

        int i = 0, j = n - 1;

        while(i <= j){
            swap(ans[i], ans[j]);
            i++, j--;
        }
        

        return ans == original;
    }
};