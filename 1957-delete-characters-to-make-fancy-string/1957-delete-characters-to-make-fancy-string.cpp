class Solution {
public:
    string makeFancyString(string s) {
        int n = s.length();
        
        int j = 0;

        string ans = "";

        for(int i = 0; i < n; i++){
            if(j >= 2 && s[i] == ans[j-1] && s[i] == ans[j-2]){
                continue;
            }

            ans.push_back(s[i]);
            j++;
        }
        return ans;
    }
};