class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ret{};
        for (int i = 0; i < nums.size(); i++)
        {
            int compare = nums[i];
            int index{ 0 };
            while (compare > 0)
            {
                compare /= 10;
                index++;
            }
            if (index % 2 == 0)
            {
                ret++;
            }
        }
        return ret;
    }
};