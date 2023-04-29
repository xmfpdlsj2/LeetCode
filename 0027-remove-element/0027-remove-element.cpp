class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int ret{};
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[ret++] = nums[i];
            }
        }
        return ret;
    }
};