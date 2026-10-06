class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int cookie=0;
        int child=0;
        while(cookie<s.size() && child<g.size()){
            if(g[child]<=s[cookie]){
                child++;
            }
            cookie++;
        }
        return child;
    }
};