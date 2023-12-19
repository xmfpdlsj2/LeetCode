class Solution {
public:
    int firstUniqChar(string s) {
        std::unordered_map<int, int> table{};        
        for (int i = 0; i < s.size(); i++)
        {
            table[s[i]]++;            
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (table[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};