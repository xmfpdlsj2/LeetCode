class Solution {
public:
    char repeatedCharacter(string s) {
        std::unordered_map<char, int> table{};
        char ret;
        for (int i = 0; i < s.size(); i++)
        {
            table[s[i]]++;
            if (table[s[i]] > 1)
            {
                ret = s[i];
                break;
            }
        }
        return ret;
    }
};