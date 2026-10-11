class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> sol;
        sort(nums.begin(), nums.end());
        int a=1;
        int missing = 0; 
        for(int i=0; i< nums.size(); i++){
            if(i>0 && nums[i]==nums[i-1]){
                missing = nums[i];
            }
            if(nums[i]==a){
                a++;
            }
        
        }
        sol.push_back(missing);
        sol.push_back(a);
        return sol;
    }
};