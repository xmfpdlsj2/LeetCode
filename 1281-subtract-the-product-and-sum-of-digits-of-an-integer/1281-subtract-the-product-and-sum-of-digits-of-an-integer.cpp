class Solution {
public:
    int subtractProductAndSum(int n) {
        int multy{1}, sum{0};
        while (n > 0)
        {
            int left = n % 10;
            multy *= left;
            sum += left;
            n = n / 10;
        }
        return multy - sum;
    }
};