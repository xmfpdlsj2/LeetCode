class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ret{};
        for (int i = 0; i < operations.size(); i++)
        {
            ret += operations[i][1] == '+' ? 1 : -1;
        }
        return ret;
    }
};