class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        std::unordered_map<int, int> table;
        for (auto& e : nums)
        {
            table[e]++;
        }
        
        int answer{};
        for (auto& e : table)
        {
            if (e.second == 1)
            {
                answer = e.first;
                break;
            }
        }
        return answer;
    }
};