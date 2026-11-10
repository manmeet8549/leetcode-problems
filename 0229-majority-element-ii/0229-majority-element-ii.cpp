class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i: nums){
            mp[i]++;
        }
        int n = nums.size()/3;
        vector<int>sol;
        for(auto j: mp){
            if(j.second > n ){
                sol.push_back(j.first);
            }
        }
    return sol;
    }
};