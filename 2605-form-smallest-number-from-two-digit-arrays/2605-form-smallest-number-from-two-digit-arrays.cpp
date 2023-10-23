class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        std::map<int, int> table;
        int ret{};
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());
        for (const auto& e : nums1)
        {
            table[e]++;
        }
        for (const auto& e : nums2)
        {
            table[e]++;
        }
        for (const auto& e : table)
        {
            if (e.second > 1)
            {
                ret = e.first;
                break;
            }
        }
        if (ret > 0) return ret;
        if (nums1[0] < nums2[0])
        {
            ret += nums1[0] * 10 + nums2[0];
        }
        else
        {
            ret += nums2[0] * 10 + nums1[0];
        }
        return ret;
    }
};