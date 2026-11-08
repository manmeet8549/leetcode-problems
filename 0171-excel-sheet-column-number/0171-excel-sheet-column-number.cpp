class Solution {
public:
    int titleToNumber(string columnTitle) {
        int count =0;
        int n= columnTitle.size()-1;
        for(int i=0; i<columnTitle.size(); i++){
            count += (columnTitle[i]-64)*pow(26,n);
            n--; 
        }
        return count;
    }
};