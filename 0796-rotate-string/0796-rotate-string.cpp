class Solution {
public:
    bool rotateString(string s, string goal) {

        if (s.length() != goal.length())
            return false;

        int n = s.length();

        for (int k = 0; k < n; k++) {

            string temp = s;

            reverse(temp.begin(), temp.begin() + k);

            reverse(temp.begin() + k, temp.end());

            reverse(temp.begin(), temp.end());

            if (temp == goal)
                return true;
        }

        return false;
    }
};