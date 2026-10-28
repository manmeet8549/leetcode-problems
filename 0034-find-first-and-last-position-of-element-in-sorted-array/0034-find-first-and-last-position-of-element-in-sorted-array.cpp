class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if( nums.size() == 0) return {-1,-1};
        int left=0;
        int right= nums.size()-1;
        int first=-1; int last =-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid]>= target){
                right = mid-1;
            }
            else{
                left= mid+1;
            }
            if (nums[mid]==target){
                first = mid;
            }
        }
        left=0;
        right= nums.size()-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid] <= target){
                left = mid+1;
            }
            else{
                right= mid-1;
            }
            if (nums[mid]==target){
                last = mid;
            }
        }
    return {first,last};
    }
};