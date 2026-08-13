class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size();
        int n = nums2.size();

        vector<int> merged(m + n);

        merge(nums1.begin(), nums1.end(),
              nums2.begin(), nums2.end(),
              merged.begin());

        int left = 0;
        int right = merged.size() - 1;

        int mid = (left + right) / 2;

        if (merged.size() % 2 == 1) {
            return merged[mid];
        }

        return (merged[mid] + merged[mid + 1]) / 2.0;
    }
};