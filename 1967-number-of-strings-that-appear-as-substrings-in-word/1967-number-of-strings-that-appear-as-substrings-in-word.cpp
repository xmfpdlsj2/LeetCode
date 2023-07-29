class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        for (auto e : patterns) {
            if (word.find(e) != std::string::npos) count++;
        }
        return count;
    }
};