class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();

        string ans = "";

        for(int i = 0; i < n; i++) {

            if(s[i] == ' ')
                continue;

            if(s[i] != '+' && s[i] != '-' &&
               !(s[i] >= '0' && s[i] <= '9')) {
                return 0;
            }

            if(s[i] == '+' || s[i] == '-') {
                ans.push_back(s[i]);
                i++;
            }

            while(i < n && s[i] >= '0' && s[i] <= '9') {
                ans.push_back(s[i]);
                i++;
            }

            break;
        }

        if(ans == "+" || ans == "-") {
            return 0;
        }

        long long num = 0;
        int sign = 1;
        int start = 0;

        if(ans[0] == '-') {
            sign = -1;
            start = 1;
        }
        else if(ans[0] == '+') {
            start = 1;
        }

        for(int i = start; i < ans.length(); i++) {

            int digit = ans[i] - '0';

            if(sign == 1) {
                if(num > 2147483647LL / 10 ||
                   (num == 2147483647LL / 10 && digit > 7)) {
                    return 2147483647;
                }
            }
            else {
                if(num > 2147483648LL / 10 ||
                   (num == 2147483648LL / 10 && digit > 8)) {
                    return -2147483648LL;
                }
            }

            num = num * 10 + digit;
        }

        return num * sign;
    }
};