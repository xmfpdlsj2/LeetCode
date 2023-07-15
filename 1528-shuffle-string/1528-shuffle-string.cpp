class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        std::vector<char> ret(indices.size());

        for (int i = 0; i < indices.size(); i++)
        {
            ret[indices[i]] = s[i];
        }

        return std::string(ret.begin(), ret.end());
    }
};