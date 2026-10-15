class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum= 0 , rightsum=0;
        for(int i: nums){
            rightsum += i;
        }
        for( int i=0; i<nums.size(); i++){
            leftsum+= nums[i];
            if(leftsum == rightsum){
                return i;
            }
            rightsum -= nums[i];
        }
        return -1;
    }
};