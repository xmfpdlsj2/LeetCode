class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int, int> mpp;
        for(const auto& i : num)
        {
            mpp[i-'0']++;
        }
        for(int i = 0; i < num.size(); i++)
        {
            if(num[i] - '0' != mpp[i])
            {
                return false;
            }
        }
        return true;
    }
};