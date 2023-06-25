class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        std::vector<int> table(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            int ret{}; 
            for (int j = 0; j < nums.size(); j++)
            {
                if (i < j)
                {
                    ret += nums[j];
                }
                else if (i > j)
                {
                    ret -= nums[j];
                }
            }
            table[i] = std::abs(ret);
        }
        return table;
    }
};