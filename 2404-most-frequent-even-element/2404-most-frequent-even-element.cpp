class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int ret{ -1 };
        std::map<int, int> table{};
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 != 0) continue;
            table[nums[i]]++;
        }
        int min{};
        for (auto& e : table)
        {
            if (e.second > min)
            {
                min = e.second;
                ret = e.first;
            }
        }
        return ret;
    }
};