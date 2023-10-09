class Solution {
public:
    bool isUgly(int n) {
        if (n < 1) return false;
        std::array<int, 3> uglyPrimes = { 2, 3, 5 };
        for (int prime : uglyPrimes)
        {
            while (n % prime == 0)
            {
                n /= prime;
            }
        }
        return n == 1;
    }
};