class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost[0];
        int m = cost[1];
        for(int i=2; i<cost.size(); i++){
            int sol = cost[i] + min(n,m);
            n=m;
            m=sol;
        }
        return min(n,m);
    }
};