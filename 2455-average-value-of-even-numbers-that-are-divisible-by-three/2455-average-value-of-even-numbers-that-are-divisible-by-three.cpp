class Solution {
public:
    int averageValue(vector<int>& nums) {
        int ret{}, count{};
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0 && nums[i] % 3 == 0)
            {
                ret += nums[i];
                count++;
            }
        }
        if (count > 0) ret /= count;
	    return ret;
    }
};