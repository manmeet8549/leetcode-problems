class Solution {
public:
    int maxArea(vector<int>& height) {
        int high=0;
        int area=0;
        int a=0;
        int b=height.size()-1;
        
        while(a!=b){
            area = min(height[a], height[b]) * (b-a);
            high = max(high , area);
            if(height[a]<=height[b]){
                a++;
            }
            else{
                b--;
            }
        }
        
        return high;
    }
};