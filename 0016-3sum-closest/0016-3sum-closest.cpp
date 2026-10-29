class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
     sort(nums.begin(), nums.end());
     int sol = nums[0] + nums[1] + nums[2];
     int diff= abs(target - sol);
     for(int i= 0 ; i<nums.size()-2 ; i++){
        int left= i+1;
        int right = nums.size()-1;
        while(left<right){
            int sum = nums[i]+ nums[left] + nums[right];
            if(diff > abs(target - sum)){
                diff = abs(target - sum);
                sol = sum;
            }
            if(target == sum){
                return sum;
            }
            
            if(target > sum){
                left++;
            }
            else right--;
        }
    }   
    return sol;
    }
};