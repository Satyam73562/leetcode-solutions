class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size()+nums2.size();
        vector<int>c;
        for(int i=0;i<nums1.size();i++) {
            c.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++) {
            c.push_back(nums2[i]);
        }
        sort(c.begin(),c.end());
        if(n%2==1) {
            return c[n/2];
        }
        else {
            return(c[n/2-1]+c[n/2])/2.0;
        }
    }
};
