#include <stdio.h>

// Function to find the median of two sorted arrays
double findMedianSortedArrays(int nums1[], int m, int nums2[], int n) {
    // Swap arrays to ensure nums1 is the smaller array
    if (m > n) {
        int* temp_nums = nums1;
        nums1 = nums2;
        nums2 = temp_nums;

        int temp_m = m;
        m = n;
        n = temp_m;
    }

    int i_min = 0, i_max = m, half_len = (m + n + 1) / 2;
    while (i_min <= i_max) {
        int i = (i_min + i_max) / 2;
        int j = half_len - i;

        if (i < i_max && nums2[j - 1] > nums1[i]) {
            // i is too small, increase it
            i_min = i + 1;
        } else if (i > i_min && nums1[i - 1] > nums2[j]) {
            // i is too big, decrease it
            i_max = i - 1;
        } else {
            // i is perfect, find the median
            int max_of_left;
            if (i == 0) {
                max_of_left = nums2[j - 1];
            } else if (j == 0) {
                max_of_left = nums1[i - 1];
            } else {
                max_of_left = nums1[i - 1] > nums2[j - 1] ? nums1[i - 1] : nums2[j - 1];
            }

            if ((m + n) % 2 == 1) {
                // If the total number of elements is odd, return the median
                return max_of_left;
            }

            int min_of_right;
            if (i == m) {
                min_of_right = nums2[j];
            } else if (j == n) {
                min_of_right = nums1[i];
            } else {
                min_of_right = nums1[i] < nums2[j] ? nums1[i] : nums2[j];
            }

            // If the total number of elements is even, calculate the median
            return (max_of_left
