class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ret{};
        for (int i = 0; i < strs[0].size(); i++)
        {
            int comp = 0;
            for (int j = 0; j < strs.size(); j++)
            {
                if (strs[j][i] < comp)
                {
                    ret++;
                    break;
                }
                comp = strs[j][i];
            }
        }
        return ret;
    }
};