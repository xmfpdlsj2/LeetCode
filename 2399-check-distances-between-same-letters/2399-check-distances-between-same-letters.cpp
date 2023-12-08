class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        std::vector<int> table(128, -1);
        for (int i = 0; i < s.size(); i++)
        {
            if (table[s[i]] == -1)
            {
                table[s[i]] = i;
            }
            else
            {
                table[s[i]] = i - table[s[i]] - 1;
            }
        }
        for (int i = 0; i < table.size(); i++)
        {
            if (table[i] != -1)
            {
                if (distance[i - 'a'] != table[i])
                {
                    return false;
                }
            }
        }
        return true;
    }
};