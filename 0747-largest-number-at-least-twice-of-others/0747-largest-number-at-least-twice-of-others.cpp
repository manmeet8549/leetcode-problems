class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> arr = nums;
        sort(arr.begin(), arr.end());

        int n = nums.size()-1;
        if(n == 0) return 0;
        
        
        if(arr[n] >= arr[n-1]*2 ){
            for(int i=0; i<=n ; i++){
                if(nums[i] == arr[n]){
                    return i;
                }
            }
        }
    return -1;
    }
};