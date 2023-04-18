class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> ret{};
        std::set<std::vector<int>> table {};

        for (int i = 0; i < nums.size(); i++)
        {
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0)
                {
                    table.insert({ nums[i], nums[j], nums[k] });
                    j++;
                    k--;
                }
                else if ( sum < 0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        for (auto& e : table)
        {
            ret.push_back(e);
        }
        return ret;
    }
};