class Solution {
public:
    int minDeletions(string s) {
        
        int n = s.length();

        vector<int> freq(256, 0);

        for(int i = 0; i < n; i++){
            freq[s[i]]++;
        }

        set<int> used;
        int deletions = 0;

        for(int i = 0; i < 256; i++){
            if(freq[i] == 0) continue;

            while(used.contains(freq[i])){
                freq[i]--;
                deletions++;
            }

            if(freq[i] > 0){
                used.insert(freq[i]);
            }
        }

        return deletions;
    }
};