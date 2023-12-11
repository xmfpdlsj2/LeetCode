class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        std::vector<int> table(size, 1);
        std::vector<int> ret{};
        for (int i = 0; i < size; i++)
        {
            if (table[nums[i] - 1] == 1) table[nums[i] - 1] = 0;
        }
        for (int i = 0; i < table.size(); i++)
        {
            if (table[i] == 1)
            {
                ret.push_back(i + 1);
            }
        }
        return ret;
    }
};