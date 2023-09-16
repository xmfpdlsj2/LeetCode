class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        std::vector<int> ret{};
        std::vector<int> odd{};
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0) ret.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        for (auto& e : odd)
        {
            ret.push_back(e);
        }
        return ret;
    }
};