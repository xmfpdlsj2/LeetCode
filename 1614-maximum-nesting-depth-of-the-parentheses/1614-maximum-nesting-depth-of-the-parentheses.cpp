class Solution {
public:
    int maxDepth(string s) {
        int ret{}, temp{};

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                ret = std::max(ret, ++temp);
            }
            else if (s[i] == ')')
            {
                temp--;
            }
        }

        return ret;
    }
};