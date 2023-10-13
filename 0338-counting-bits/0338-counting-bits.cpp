class Solution {
public:
    vector<int> countBits(int n) {
        std::vector<int> ret{};
        for (int i = 0; i <= n; i++)
        {
            int sum = 0, num = i;
            while (num != 0)
            {
                sum += num % 2;
                num = num / 2;
            }
            ret.push_back(sum);
        }
        return ret;
    }
};