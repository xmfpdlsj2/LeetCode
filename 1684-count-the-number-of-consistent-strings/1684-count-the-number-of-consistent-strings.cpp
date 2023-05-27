class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        std::vector<int> ascii(128);
        for (auto& e : allowed)
        {
            ascii[e]++;
        }

        int ret{};

        for (auto& e : words)
        {
            ret++;
            for (int i = 0; i < e.length(); i++)
            {
                if (ascii[e[i]] == 0)
                {
                    ret--;
                    break;
                }
            }
        }

        return ret;
    }
};