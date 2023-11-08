class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int ret{ -1 }, count{};
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] > nums[i])
            {
                ret = i;
                count++;
            }
        }
        if (ret == -1) return 0;
        if (count > 1 || nums[0] < nums[nums.size() - 1]) return -1;
        return nums.size() - ret;
    }
};