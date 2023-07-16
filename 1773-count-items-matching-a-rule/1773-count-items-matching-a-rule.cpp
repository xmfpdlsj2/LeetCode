class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ret{};
        int key{};
        key = ruleKey == "type"
            ? 0
            : ruleKey == "color"
            ? 1
            : 2;

        for (int i = 0; i < items.size(); i++)
        {
            if (items[i][key] == ruleValue)
            {
                ret++;
            }
        }
        return ret;
    }
};