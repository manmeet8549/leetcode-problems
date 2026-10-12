class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> sol(img.size(), vector<int>(img[0].size(),0));
        for(int i=0; i<img.size(); i++){
            for(int j=0; j<img[i].size(); j++){
                int sum = 0 ;
                int cell= 0 ;
                for(int x = i-1; x <= i+1; x++){
                    for(int y = j-1; y <= j+1; y++){
                        if(x >= 0 && x < img.size() &&
                           y >= 0 && y < img[0].size()){
                            sum += img[x][y];
                            cell++;
                        }
                    }
                }
                sol[i][j] = sum/cell;
            }
        }
        return sol;
    }
};