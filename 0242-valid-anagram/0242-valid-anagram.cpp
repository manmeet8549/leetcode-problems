class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!= t.size()){
            return false;
        }
        unordered_map<char, int> val;
        for (int c=0 ; c<s.size(); c++){
            val[s[c]]++;
            val[t[c]]--;
        }
        for(auto i : val){
            if(i.second !=0){
                return false;
            }
        }
        return true;
    }
};