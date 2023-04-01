class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        std::unordered_map<int, int> table{};
        
        for (auto& e : nums)
        {
            table[e]++;
            if (table[e] == 2)
            {
                return true;
            }
        }
        return false;
    }
};