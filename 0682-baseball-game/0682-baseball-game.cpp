class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        vector<int> stack;
        int sum = 0;
        for(string s : operations){
            
            if(s == "D"){
                stack.push_back(stack.back()*2);
            }
            else if(s == "C"){
                stack.pop_back();
            }
            else if(s == "+"){
                stack.push_back(stack[stack.size()-1]+ (stack[stack.size()-2]));
            }
            else{
                stack.push_back(stoi(s));
            }
            
        }
        for (int i : stack){
            sum += i;
        }
    return sum;
    }
};