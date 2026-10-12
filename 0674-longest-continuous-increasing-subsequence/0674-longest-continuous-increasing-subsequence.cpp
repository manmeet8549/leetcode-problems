class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int sol = 1;
        int count = 1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]<nums[i+1]){
                count ++;
            }
            else{
                sol = max(sol, count);
                count = 1;
            }
            if(i == nums.size()-2){
                sol = max(sol, count);
            }

        }
        return sol;
    }
};