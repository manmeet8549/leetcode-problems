class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        for(char c: s){
            if(c == '(' || c=='{' || c=='['){
                stack.push_back(c);
            }
            else{
                if(stack.empty()) return false;

                else if((stack.back()=='(' && c==')') || (stack.back()=='{' && c=='}') || (stack.back()=='[' && c==']') ){
                stack.pop_back();
                }
                else return false;
            } 
             
        }
        if(stack.size()==0){
            return true;
        }
        else return false;
    }
};