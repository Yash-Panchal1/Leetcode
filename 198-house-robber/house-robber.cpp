class Solution {
public:
    int rob(vector<int>& nums) {
        int robprev = 0;
        int notrobprev =0;

        for(int money:nums){
            int curr = max(notrobprev+money,robprev);
            notrobprev = robprev;
            robprev=curr;
        }
        return robprev;
    }
};