class Solution {
public:
std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums) {
        std::vector<int> ret{};
        for (int i = 0; i < nums.size(); i++)
        {
            int count{};
            for (int j = 0; j < nums.size(); j++)
            {
                if (i == j) continue;
                if (nums[i] > nums[j])
                {
                    count++;
                }
            }
            ret.push_back(count);
        }
        return ret;
    }
};