class Solution {
public:
    int countGoodSubstrings(string s) {
        int ret{};
        std::unordered_set<int> table{};
        for (int i = 0; i < s.size(); i++)
        {
            bool isGood = true;
            table.clear();
            for (int j = i; j < i + 3; j++)
            {
                if (j >= s.size()) 
                {
                    isGood = false;
                    break;
                }
                if (table.contains(s[j]))
                {
                    isGood = false;
                    break;
                }
                table.insert(s[j]);
            }
            if (isGood) ret++;
        }
        return ret;
    }
};