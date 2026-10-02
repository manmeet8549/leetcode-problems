class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int> count;
        int maxcount = 0 , ans = 0;
        for (int num : nums){
            count[num]++;
            if(count[num]>maxcount){
                ans = num;
                maxcount = count[num];
            }
        }
        return ans;
    }
};