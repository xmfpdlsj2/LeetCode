class Solution {
public:
    int pivotIndex(vector<int>& nums) {
                int sum {}, leftSum{};
        for(auto num : nums)
        {
            sum += num;
        }

        for(int i = 0; i < nums.size(); ++i)
        {
            if (leftSum == (sum -= nums[i]))
            {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};