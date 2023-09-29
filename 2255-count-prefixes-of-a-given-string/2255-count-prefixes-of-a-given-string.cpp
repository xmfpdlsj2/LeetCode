class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int ret{};

        for (const std::string& word : words) {
            int n = word.size();
            if(s.substr(0,n) == word) ret++;
        }

        return ret;
    }
};