class Solution {
public:
    int sumOfMultiples(int n) {
        int ret{};
        for (int i = 3; i < n + 1; i++)
        {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                ret += i;
                continue;
            }
        }
        return ret;
    }
};