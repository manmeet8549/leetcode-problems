class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int b=0 , a=0;
        double sol=INT_MIN;
        if(nums.size() < k){
                return 0;
            }
        for (int num = 0; num< nums.size(); num++){
            b += nums[num];
            if(num >= k-1){
                double c = double(b)/k ;
                sol = max(c, sol);
                b = b - nums[a];
                a++;
            }
                
        }
        return sol;
    }
};