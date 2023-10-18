class Solution {
public:
    int thirdMax(vector<int>& nums) {
        std::sort(nums.begin(), nums.end(), std::greater());
        std::vector<int> ret{};
        for (int i = 0, retIndex = 0; i < nums.size(); i++)
        {
            if (ret.size() >= 3) break;
            if (i > 0 && ret[retIndex - 1] == nums[i]) continue;
            ret.push_back(nums[i]);
            retIndex++;
        }
        if (ret.size() < 3) return nums[0];
        return ret[2];
    }
};