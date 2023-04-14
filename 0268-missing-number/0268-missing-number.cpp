class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        std::list<int> table{};
        for (int i = 0; i <= nums.size(); i++)
        {
            table.push_back(i);
        }

        for (auto& e : nums)
        {
            table.remove(e);
        }
        return table.front();
    }
};