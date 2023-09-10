class Solution {
public:
    string sortString(string s) {
        std::vector<int> table(128);
        std::string ret;
        for (int i = 0; i < s.size(); i++)
        {
            table[s[i]]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < table.size(); j++)
            {
                if (table[j] > 0)
                {
                    ret.push_back(j);
                    table[j]--;
                }
            }
            for (int k = table.size() - 1; k >= 0; k--)
            {
                if (table[k] > 0)
                {
                    ret.push_back(k);
                    table[k]--;
                }
            }
        }
        return ret;
    }
};