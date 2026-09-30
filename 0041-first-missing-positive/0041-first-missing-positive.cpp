class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        

        set<int> s;

        for(int num : nums){
            if(num > 0) s.insert(num);
        }

        int i = 1;
        for(int num : s){
            if(num == i) i++;
            else break;
        }


        return i;
    }
};