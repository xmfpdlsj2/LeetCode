class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        std::unordered_set<std::string> table{};
        for (auto& e : paths)
        {
            table.insert(e[1]);
        }
        for (auto& e : paths)
        {
            if (table.count(e[0]) > 0)
            {
                table.erase(e[0]);
            }
        }
        return *table.begin();
    }
};