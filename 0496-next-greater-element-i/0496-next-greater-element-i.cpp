class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sol;

        for(int a = 0; a < nums1.size(); a++) {
            bool greater = false;    

            for(int j = 0; j < nums2.size(); j++) {

                if(nums2[j] == nums1[a]) {

                    for(int i = j + 1; i < nums2.size(); i++) {

                        if(nums2[i] > nums1[a]) {
                            sol.push_back(nums2[i]);
                            greater = true;
                            break;
                        }
                    }

                    break;
                }
            }

            if(!greater) {
                sol.push_back(-1);
            }
        }

        return sol;
    }
};