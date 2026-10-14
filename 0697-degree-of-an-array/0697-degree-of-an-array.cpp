class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> freq, first, last;
        for(int i=0 ; i< nums.size(); i++){
            int x = nums[i];
            freq[x]++;
            if(first.find(x) == first.end()){
                first[x] = i;
            }
            last[x] = i;
        }
        int degree =0;
        for (auto j : freq){
            degree = max(degree , j.second);
        }
        int length = nums.size();
        for(auto f : freq){
            if (f.second == degree){
                length = min (length , (last[f.first]-first[f.first]+1));
            }
        }
        return length ;
    }
};