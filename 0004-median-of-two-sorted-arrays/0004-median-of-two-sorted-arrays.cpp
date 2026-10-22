class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0 , j=0;
        int n=0;
        int b=0;
        int a = (nums1.size()+nums2.size());
        double sol;
        while(i<nums1.size() || j<nums2.size()){
            int previous = b;
            if(i<nums1.size() && (j>=nums2.size() || nums1[i]<=nums2[j])){
                b= nums1[i];
                i++;
            }
            else {
                b = nums2[j];
                j++;
            }
            
            
            if(a %2 != 0 && n == ((a-1)/2)){
                sol = b;
            }
            else if(a %2 == 0 && n == ((a)/2)){
                sol = double (previous +b)/2;
            }
            n++;
            
        }
        return sol;
    }
};