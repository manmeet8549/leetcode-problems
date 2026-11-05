class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> a;
        for(int i=0; i< s.size(); i++){
            if(isalnum(s[i])){
                a.push_back(tolower(s[i]));
            }
        }
        int left=0;
        int right = a.size()-1;
        while(left< right){
            if(a[left]!= a[right]){
                return false;
            }
            left ++;
            right --;
        }
        return true;
    }
};