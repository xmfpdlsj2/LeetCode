class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first{}, second{};
        for (int i = 0; i < nums.size(); i++)
        {
            if (first < nums[i])
            {
                second = first;
                first =  nums[i];
                continue;
            }
            else if(second < nums[i]) second = nums[i];
            
        }
        return (first - 1) * (second - 1);
    }
};