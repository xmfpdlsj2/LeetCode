class Solution {
public:
    int FindIndex(std::vector<int>& nums, int target, int s, int e)
    {
        int index = (s + e) / 2;

        if (nums[index] < target)
        {
            if (index >= nums.size() - 1)
            {
                return index + 1;
            }
            if (index + 1 < nums.size() && nums[index + 1] > target)
            {
                return index + 1;
            }
            return FindIndex(nums, target, index + 1, e);
        }
        else if (nums[index] > target)
        {
            if (index <= 0)
            {
                return 0;
            }
            if (index - 1 >= 0 && nums[index - 1] < target)
            {
                return index;
            }
            return FindIndex(nums, target, s, index);
        }

        return index;
    }
    int searchInsert(std::vector<int>& nums, int target) 
    {
        return FindIndex(nums, target, 0, nums.size());
    }
};