class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1 = {'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> row2 = {'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> row3 = {'z','x','c','v','b','n','m'};
        vector<string> sol;
        int row = 0;
        for(string word : words){
            char first = tolower(word[0]);
            bool valid = true;
            if(row1.count(first)){
                row = 1;
            }
            if(row2.count(first)){
                row = 2;
            }
            if(row3.count(first)){
                row = 3;
            }
            for (char ch : word){
                ch = tolower(ch);
                if(row ==1 && !row1.count(ch)){
                    valid = false;
                    break;
                }
                if(row ==2 && !row2.count(ch)){
                    valid = false;
                    break;
                }
                if(row ==3 && !row3.count(ch)){
                    valid = false;
                    break;
                }   
            
            }
            if(valid){
                sol.push_back(word);
            }
        }
        return sol;
    }
};