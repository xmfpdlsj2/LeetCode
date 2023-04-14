class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int ret{}, sum{};
        for (int i = 0; i < nums.size(); i++)
        {
            sum += i;
            ret += nums[i];
        }
        sum += nums.size();
        return sum - ret;
    }
};