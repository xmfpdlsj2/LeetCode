class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        std::map<int, int> table{};
        for (int i = 0; i < nums1.size(); i++)
        {
            table[nums1[i][0]] = nums1[i][1];
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            table[nums2[i][0]] += nums2[i][1];
        }

        std::vector<std::vector<int>> ret{};
        for (auto& e : table)
        {
            std::vector<int> temp(2, 0);
            temp[0] = e.first;
		    temp[1] = e.second;
            ret.push_back(temp);
        }
        return ret;
    }
};