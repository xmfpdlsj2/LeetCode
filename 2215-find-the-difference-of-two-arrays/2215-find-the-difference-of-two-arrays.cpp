class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        std::vector<std::vector<int>> ret(2);
        std::unordered_set<int> num1Set{};
        std::unordered_set<int> num2Set{};
        std::unordered_set<int> num1ret{};
        std::unordered_set<int> num2ret{};
        for (int i = 0; i < nums1.size(); i++)
        {
            num1Set.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            num2Set.insert(nums2[i]);
        }
        for (int j = 0; j < nums1.size(); j++)
        {
            auto it = num2Set.find(nums1[j]);
            if (it == num2Set.end())
            {
                num1ret.insert(nums1[j]);
            }
        }
        for (int j = 0; j < nums2.size(); j++)
        {
            auto it2 = num1Set.find(nums2[j]);
            if (it2 == num1Set.end())
            {
                num2ret.insert(nums2[j]);
            }
        }
        for (auto& e : num1ret)
        {
            ret[0].push_back(e);
        }
        for (auto& e2 : num2ret)
        {
            ret[1].push_back(e2);
        }

        return ret;
    }
};