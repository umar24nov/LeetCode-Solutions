class Solution {
public:
    string addBinary(string a, string b) {

        int i = a.length() - 1;
        int j = b.length() - 1;

        int carry = 0;
        string ans = "";

        while(i >= 0 || j >= 0) {

            int x = 0;
            int y = 0;

            if(i >= 0)
                x = a[i] - '0';

            if(j >= 0)
                y = b[j] - '0';

            int total = x + y + carry;

            if(total == 0) {
                ans.push_back('0');
                carry = 0;
            }
            else if(total == 1) {
                ans.push_back('1');
                carry = 0;
            }
            else if(total == 2) {
                ans.push_back('0');
                carry = 1;
            }
            else {
                ans.push_back('1');
                carry = 1;
            }

            i--;
            j--;
        }

        if(carry == 1)
            ans.push_back('1');

        reverse(ans.begin(), ans.end());

        return ans;
    }
};