class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> value;
        vector<string> sol;
        for(int s=0 ; s<list1.size(); s++){
            value[list1[s]] = s;
        }
        int b=0;
        int x = INT_MAX;
        for(int a=0; a<list2.size(); a++){
            
            if(value.find(list2[a])!= value.end()){
                b= value[list2[a]] + a;
                if(b<=x){
                    if(b<x){
                    sol.clear();
                }
                sol.push_back(list2[a]);
                x=b;
                }
                
            }

        }
        return sol;
    }
};