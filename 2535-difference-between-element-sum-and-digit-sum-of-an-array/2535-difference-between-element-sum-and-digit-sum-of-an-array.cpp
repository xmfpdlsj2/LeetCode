class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ret{};
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= 10)
            {
                int temp = nums[i];
                int digit{};
                while (temp > 0)
                {
                    digit += temp % 10;
                    temp /= 10;
                }
                ret += (nums[i] - digit);
            }
        }
        return ret;
    }
};