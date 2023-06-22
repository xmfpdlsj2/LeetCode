class Solution {
public:
    int Sum(int count)
    {
        int ret{};
        for (int i = 0; i < count - 1; i++)
        {
            ret += i + 1;
        }
        return ret;
    }
    int numIdenticalPairs(std::vector<int>& nums) {
        std::vector<int> table(110);
        for (int i = 0; i < nums.size(); i++)
        {
            table[nums[i]]++;
        }
        int ret{};
        for (auto& e : table)
        {
            if (e > 1)
            {
                ret += Sum(e);
            }
        }
        return ret;
    }
};