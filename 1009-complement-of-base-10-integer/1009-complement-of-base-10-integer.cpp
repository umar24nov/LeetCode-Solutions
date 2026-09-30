class Solution {
public:
    string decimalToBinary(int n) {

        string str = "";

        while (n > 0) {
            int rem = n % 2;
            str.push_back(rem + '0');
            n /= 2;
        }

        reverse(str.begin(), str.end());

        return str;
    }

    int binaryToDecimal(string str) {

        int decimal = 0;

        for (int i = 0; i < str.length(); i++) {
            decimal = decimal * 2 + (str[i] - '0');
        }

        return decimal;
    }

    int bitwiseComplement(int n) {


        if(n == 0) return 1;

        string ans = decimalToBinary(n);

        for (int i = 0; i < ans.length(); i++) {
            if (ans[i] == '0')
                ans[i] = '1';
            else
                ans[i] = '0';
        }


        return binaryToDecimal(ans);
    }
};