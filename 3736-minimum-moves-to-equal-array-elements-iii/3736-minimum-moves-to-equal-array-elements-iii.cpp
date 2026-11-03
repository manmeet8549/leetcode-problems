class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int sol=0;
        for(int i : nums){
            sol += (maxi-i);
        }
        return sol;
    }
};