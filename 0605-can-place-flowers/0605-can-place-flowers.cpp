class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
         if(n == 0) return true;

        int m = 0;
        int a = 1; 

        for(int i = 0; i < flowerbed.size(); i++){
            if(flowerbed[i] == 0){
                a++;
            }
            else{
                m += (a - 1) / 2;
                a = 0;
            }
        }

        m += a / 2;  

        return m >= n;
    }
};