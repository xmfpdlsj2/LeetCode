class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        std::vector<int> ret{};
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > target) break;
            if (nums[i] == target)
            {
                ret.push_back(i);
            }
        }
        return ret;
    }
};