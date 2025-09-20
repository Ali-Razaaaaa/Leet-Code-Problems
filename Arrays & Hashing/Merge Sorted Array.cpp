class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int y = m - 1;      
        int z = n - 1;      
        int k = m + n - 1;   

        for (int i = m + n - 1; i >= 0; i--) {
            if (z < 0) break; 

            if (y >= 0 && nums1[y] > nums2[z]) {
                nums1[k] = nums1[y];
                y--;
                k--;
            } else {
                nums1[k] = nums2[z];
                z--;
                k--;
            }
        }
    }
};
