class Solution {
public:
    bool areOccurrencesEqual(string s) {
     	std::unordered_map<char, int> table{};
        for (int i = 0; i < s.size(); i++)
        {
            table[s[i]]++;
        }
        int index = table[s[0]];
        for (auto& e : table)
        {
            if (e.second != index)
            {
                return false;
            }
        }
        return true;   
    }
};