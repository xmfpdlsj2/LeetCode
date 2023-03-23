class Solution {
public:
    double findMedianSortedArrays(std::vector<int>&nums1, std::vector<int>& nums2)
    {
        std::vector<int> sumSort{};
        for (auto& n : nums1)
        {
            sumSort.push_back(n);
        }
        for (auto& n : nums2)
        {
            sumSort.push_back(n);
        }

        std::sort(sumSort.begin(), sumSort.end());

        int size = sumSort.size();
        return size % 2 ? sumSort[size / 2] : (sumSort[(size / 2) - 1] + sumSort[(size / 2)]) / 2.0;
    }
};