class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> ans;
        vector<int> sol;
        unordered_set <int> dublicate;
        for(int num: nums1){
            ans.insert(num);
        }
        for(int i=0; i<nums2.size();i++){
            if (ans.find(nums2[i]) != ans.end() && dublicate.find(nums2[i])==dublicate.end())
            sol.push_back(nums2[i]);
            dublicate.insert(nums2[i]);
        }
        return sol;

    }
};