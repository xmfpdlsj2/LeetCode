class Solution {
public:
    int countGoodSubstrings(string s) {
        if (s.size() < 3)return 0;
        int ret{};
        char a = s[0], b = s[1], c = s[2];
        for (int i = 3; i <= s.size() - 1; i++)
        {
            if (a != b and b != c and c != a) ret++;
            a = b;
            b = c;
            c = s[i];
        }
        if (a != b and b != c and c != a) ret++;
        return ret;
    }
};