class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int ret{}, min{};

        while (true)
        {
            min = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] > 0) {
                    min = nums[i];
                    break;
                }
            }
            if (min <= 0) {
                break;
            }
            else
            {
                ret++;
                for (int i = 0; i < nums.size(); i++)
                {
                    nums[i] -= min;
                }
            }
        }
        return ret;
    }
};