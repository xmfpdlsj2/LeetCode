class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        std::string ret{};

        for (int i = 0, j = 0; i < word1.size() + word2.size(); i++, j++)
        {
            if (i < word1.size()) ret += word1[i];
            if (j < word2.size()) ret += word2[j];
        }

        return ret;
    }
};