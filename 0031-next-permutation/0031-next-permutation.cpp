class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        for(int i=nums.size()-1; i>0; i--){
            if(nums[i-1]<nums[i]){
                int j = nums.size()-1;

                while(nums[j] <= nums[i-1]){
                    j--;
                }
                swap(nums[i-1], nums[j]);
                reverse(nums.begin()+i, nums.end());
                return;
            }
        }
        return  sort(nums.begin(), nums.end());
    }
};