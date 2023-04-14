class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        std::unordered_set<int> table;
        for (int i = 0; i <= nums.size(); i++)
        {
            table.insert(i);
        }

        for (auto& e : nums)
        {
            table.erase(e);
        }

        int ret{};
        for (auto& e : table)
        {
            ret = e;
        }
        return ret;
    }
};