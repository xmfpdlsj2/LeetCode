class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        std::vector<int> table(nums.size());
        int right{}, left{};

        for (auto& i : nums) right += i;

        for (int i = 0; i < nums.size(); i++)
        {
            right -= nums[i];
            table[i] = abs(left - right);
            left += nums[i];
        }

        return table;
    }
};