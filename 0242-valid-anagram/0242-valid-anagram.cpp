class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> val;
        for (char c:s){
            val[c]++;
        }
        for(char c: t){
            val[c]--;
        } 
        for(auto i : val){
            if(i.second !=0){
                return false;
            }
        }
        return true;
    }
};