class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int ret{ 1 };
        std::unordered_set<char> table{};
        for (auto& e : brokenLetters)
        {
            table.insert(e);
        }
        bool isSecond = false;
        for (int i = 0; i < text.size(); i++)
        {
            if (text[i] == ' ') {
                ret++;
                isSecond = false;
            }
            if (isSecond) continue;
            if (table.contains(text[i])){
                ret--;
                isSecond = true;
            }
        }
        return ret;
    }
};