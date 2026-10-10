class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        vector<int> values;
        int sol = 0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i +=2){
            values.push_back(min(nums[i],nums[i+1]));
        }
        for(int num : values){
            sol = sol + num;
        }
        return sol;
    }
};