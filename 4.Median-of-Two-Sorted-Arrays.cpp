class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        const int n = nums1.size();
        const int m = nums2.size();
        vector<int> merged_nums;
        merged_nums.reserve(n+m);

        int p = 0;
        int q = 0;
        int i = 0;

        while(p < n && q < m) {
            if(nums1[p] < nums2[q]) {
                merged_nums[i] = nums1[p];
                p++;
            } else {
                merged_nums[i] = nums2[q];
                q++;
            }
            i++;
        }

        if(p < n) {
            std::move(nums1.begin()+p, nums1.end(), merged_nums.begin() + i); 
        } else {
            std::move(nums2.begin()+q, nums2.end(), merged_nums.begin() + i); 
        }

        int x = (m+n)/2;
        if((m+n)%2 == 1) {
            return merged_nums[x];
        } else {
            return (double)(merged_nums[x]+merged_nums[x-1])/2;
        }

    }
};