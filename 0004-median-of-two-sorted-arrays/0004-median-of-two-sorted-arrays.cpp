class Solution {
public:
    double findMedianSortedArrays(std::vector<int>&nums1, std::vector<int>& nums2)
    {
        int i{}, j{}, lastIndex{ -1 }, n1 = nums1.size(), n2 = nums2.size();
        std::vector<int> sumSort(n1 + n2);

        while (i < n1 && j < n2)
        {
            if (nums1[i] <= nums2[j])
            {
                sumSort[++lastIndex] = nums1[i++];
            }
            else
            {
                sumSort[++lastIndex] = nums2[j++];
            }
        }

        while (i < n1)
        {
            sumSort[++lastIndex] = nums1[i++];
        }
        while (j < n2)
        {
            sumSort[++lastIndex] = nums2[j++];
        }

        int size = sumSort.size();
        return size % 2 ? sumSort[size / 2] : (sumSort[(size / 2) - 1] + sumSort[(size / 2)]) / 2.0;
    }
};