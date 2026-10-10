class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector <pair<int,int>> a;
        vector<string> sol(score.size());  

        for (int i=0; i<score.size(); i++){
            a.push_back({score[i],i});
        }

        sort(a.begin(), a.end(), greater<pair<int,int>>());

        for(int j=0 ; j< score.size() ; j++){

            if(j==0){
                sol[a[j].second] = "Gold Medal";  
                continue;
            }
            if(j==1){
                sol[a[j].second] = "Silver Medal";
                continue;
            }
            if(j==2){
                sol[a[j].second] = "Bronze Medal";
                continue;
            }

            string c = to_string(j + 1);
            sol[a[j].second] = c;
        }

        return sol;
    }
};