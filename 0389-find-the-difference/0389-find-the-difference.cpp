class Solution {
public:
    char findTheDifference(string s, string t) {
        char ret;
        std::vector<int> table(128);
        for (int i = 0; i < t.size(); i++)
        {
            table[t[i]]++;        
        }
        for (int i = 0; i < s.size(); i++)
        {
            table[s[i]]--;
        }
        for (int i = 0; i < table.size(); i++)
        {
            if (table[i] == 1)
            {
                ret = i;
                break;
            }
        }
        return ret;
    }
};
