class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() ==0) return 0;
        sort(nums.begin(), nums.end());
        int count = 1;
        int a=1;
        for(int i=0; i<nums.size()-1 ; i++){
            if(nums[i+1] == nums[i]+1) a++;
            else if(nums[i+1] == nums[i]) continue;
            else{
                count = max(a,count);
                a=1;
            }
        }
        count = max(a,count);
    return count;
    }
};