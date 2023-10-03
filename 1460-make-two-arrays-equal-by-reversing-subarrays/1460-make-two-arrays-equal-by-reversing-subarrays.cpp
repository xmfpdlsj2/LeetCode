class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        std::unordered_map<int, int> table{};
        for (auto& e : target)
        {
            table[e]++;
        }
        for (auto& e : arr)
        {
            table[e]--;
            if (table[e] < 0) return false;
        }
        return true;
    }
};