class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>temp;
        int i,j;
        for(i=0;i<numRows;i++){
            vector<int>add;
            for(j=0;j<=i;j++){
                if(j==0 || j==i){
                    add.push_back(1);
                }
                else{
                    add.push_back(temp[i-1][j-1]+temp[i-1][j]);
                }
            }
            temp.push_back(add);
        }
        return temp;
    }
};