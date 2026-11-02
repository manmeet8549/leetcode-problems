class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mid = nums.size() /2;
        int left = mid-1;
        int right = mid+1;
        int count=0;
        while(left>=0 || right< nums.size()){
            
            if(left>=0){
                count += nums[mid] - nums[left];
                left--;
            }
            else if(right< nums.size()){
                count += nums[right] - nums[mid];
                right ++;
            }
        }
        return count;
    }
};