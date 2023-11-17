class Solution {
public:
    string finalString(string s) {
        std::string ret{};
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'i')
            {
                std::reverse(ret.begin(), ret.end());
                continue;
            }
            ret.push_back(s[i]);
        }
        return ret;
    }
};