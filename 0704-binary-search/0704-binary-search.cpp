class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int vLeft{}, vRight{}, mid{};
        vRight = nums.size() - 1;

        while (vLeft <= vRight)
        {
            mid = (vLeft + vRight) >> 1;
            if (nums[mid] == target)
            {
                return mid;
            }

            if (nums[mid] > target)
            {
                vRight = mid - 1;
            }
            else
            {
                vLeft = mid + 1;
            }
        }

        return -1;
    }
};