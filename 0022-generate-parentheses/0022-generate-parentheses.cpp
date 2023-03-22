class Solution {
public:
    void MakeParenthesis(int left, int right, std::string s, std::vector<std::string>& ret)
    {
        if (left < 0 || right < 0)
        {
            return;
        }
        if (left == 0 && right == 0)
        {
            ret.push_back(s);
            return;
        }

        MakeParenthesis(left- 1, right, s + "(", ret);

        if (right > left)
        {
            MakeParenthesis(left, right - 1, s + ")", ret);
        }
    }
    vector<string> generateParenthesis(int n)
    {
        std::vector<std::string> ret{};
        MakeParenthesis(n, n, "", ret);
        return ret;
    }
};