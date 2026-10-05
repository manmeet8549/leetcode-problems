class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int,int> answer;
        vector <int> sol;
        int count=0;
        for(int num: nums1){
            answer[num]++;
        }
        for(int num: nums2){
            if(answer.find(num)!=answer.end() && answer[num]>0){
                sol.push_back(num);
                answer[num]--;
            }
        }
        return sol;
    }
};