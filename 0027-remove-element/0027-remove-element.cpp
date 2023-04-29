class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int ret{};
        std::vector<int> retNums{};
        for (auto& e : nums)
        {
            if (e == val)
            {
                ret++;
            }
            else
            {
                retNums.push_back(e);
            }
        }
        ret = nums.size() - ret;
        nums = retNums;
        return ret;
    }
};