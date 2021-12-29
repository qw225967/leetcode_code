#include<iostream>
#include<vector>
class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        int n = nums1.size()+nums2.size(),j=0,k=0;
        double result = -1;
        std::vector<int> vec_all(n);
        for(int i =0;i<n;i++) {
            if(j<nums1.size() && k<nums2.size()) {
                if(nums1[j] < nums2[k]) {
                    vec_all[i] = nums1[j];
                    j++;
                } else {
                    vec_all[i] = nums2[k];
                    k++;
                }
            } else if( k >= nums2.size() && j < nums1.size()) {
                vec_all[i] = nums1[j];
                    j++;
            }  else if( k < nums2.size() && j >= nums1.size()) {
                vec_all[i] = nums2[k];
                    k++;
            }
        }
        if(n % 2 != 0) {
            result = vec_all[n/2];
        } else {
            result = (vec_all[n/2] + vec_all[n/2 - 1])/2;
        }
        return result;
    }
};

int main() {
    std::vector<int> arr1 = {1,2};
    std::vector<int> arr2 = {3,4};
    
    Solution s;
    s.findMedianSortedArrays(arr1,arr2);

    return 0;
}
