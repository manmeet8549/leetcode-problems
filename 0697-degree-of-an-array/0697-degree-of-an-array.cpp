class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> map;
        for (int i : nums){
            map[i]++; 
        }
        int max=0;
        vector<int> v;
        for(int i: nums){
            if(map[i]>max){
                max = map[i];
                v.clear();
                v.push_back(i);
            }else if(map[i]== max){
                v.push_back(i);
            }
        }
        int degree= INT_MAX;
        for(int i : v){
            int start=0 , end=0;
            for(int j=0; j<nums.size();j++){
                if(nums[j] == i){
                    start = j;
                    break;
                }
            }
            for(int k=nums.size()-1 ; k>0 ; k--){
                if(nums[k] == i){
                    end = k;
                    break;
                }
            }
                degree = min(degree , (end-start+1));
        }
        return degree;
    }
};