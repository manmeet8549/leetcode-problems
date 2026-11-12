class Solution {
public:
    char findTheDifference(string s, string t) {
        char sol =0;
        for(char i: s){
            sol ^= i;
        }
        for(char j:t){
            sol ^=j;
        }
        return sol;
    }
};