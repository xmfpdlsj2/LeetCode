class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        std::vector<int> ret{};

        for (int i = 0; i < nums.size() / 2; i++)
        {
            for (int j = 0; j < nums[2 * i]; j++)
            {
                ret.push_back(nums[2 * i + 1]);
            }
        }

        return ret;
    }
};