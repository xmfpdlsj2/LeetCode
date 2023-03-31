class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        std::unordered_map<int, int> table{};
        int majority = nums.size() / 2;
        int answer{};
        for (auto& e : nums)
        {
            table[e]++;
            if (table[e] > majority)
            {
                answer = e;
                break;
            }
        }
        return answer;
    }
};