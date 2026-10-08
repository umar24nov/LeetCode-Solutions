class Solution {
public:
    int strStr(string s, string t) {

        int i = 0, j = 0;

        while (j < s.length()) {

            if (t[i] == s[j]) {
                i++;
                j++;

                if (i == t.length()) return j - i;
            }

            if (i < t.length() && j < s.length() && t[i] != s[j]) {
                j = j - i + 1;
                i = 0;
            }
        }

        return -1;
    }
};