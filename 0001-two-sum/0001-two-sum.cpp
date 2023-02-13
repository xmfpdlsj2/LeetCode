class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        std::map<int, int> gap{};
        std::vector<int> result{};

        gap[0] = target - nums[0];

        for(int i = 1; i < nums.size(); i++)
        {
            for(auto& e : gap)
            {
                if (e.second == nums[i])
                {
                    result.push_back(e.first);
                    result.push_back(i);
                    break;
                }
            }
            gap[i] = target - nums[i];

        }
        return result;
    }
};