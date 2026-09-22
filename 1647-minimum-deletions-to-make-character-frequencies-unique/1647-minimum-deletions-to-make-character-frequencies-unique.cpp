class Solution {
public:

    int minDeletions(string str) {
        
        int n = str.length();

        vector<int> freq(256, 0);

        for(int i = 0; i < n; i++){
            freq[str[i]]++;
        }


        set<int> s;

        int deletions = 0;

        for(int i = 0; i < 256; i++){
            if(freq[i] == 0) continue;


            while(s.contains(freq[i])){
                freq[i]--;
                deletions++;
            }


            if(freq[i] > 0){
                s.insert(freq[i]);
            }
        }

        return deletions;
    }
};