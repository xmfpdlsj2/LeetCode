class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int num = nums.size();
        for (int i = 0; i < num; i++)
        {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};