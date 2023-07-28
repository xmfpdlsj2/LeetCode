class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first{}, second{};
        for (int i = 0; i < nums.size(); i++)
        {
            if (first < nums[i])
            {
                second = second <= first ? first : second;
                first =  nums[i];
                continue;
            }
            second = second <= nums[i] ? nums[i] : second;
        }
        return (first - 1) * (second - 1);
    }
};