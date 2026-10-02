class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> freq;

        for(char x : s){
            freq[x]++;
        }


        for(char x : t){
            freq[x]--;

            if(freq[x] < 0) return x;
        }

        return ' ';
    }
};