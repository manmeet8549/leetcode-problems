class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m= matrix.size();
        for (int i=0; i<m; i++){
            for(int j=i+1; j<m; j++){
                swap (matrix[i][j], matrix[j][i]);
            }
        }
        int left = 0;
        int right= matrix.size()-1;
        while(left<right){
            for(int k=0; k<m ; k++){
                swap(matrix[k][left], matrix[k][right]);
            }
            left++;
            right--;
        } 

    }
};