class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> d;
        vector<vector<int>> sol;
        vector<int> semi;
        int m = mat.size()*mat[0].size();
        if(m != r*c){
            return mat;
        }
        for(vector<int> num : mat){
            for(int n : num){
                d.push_back(n);
            }
        }
        for(int i=0 ; i< m ; i= i+c){
            for(int j=i ; j<i+c ; j++){
                semi.push_back(d[j]);
            }
            sol.push_back(semi);
            semi.clear();
        }
        return sol;
    }
};