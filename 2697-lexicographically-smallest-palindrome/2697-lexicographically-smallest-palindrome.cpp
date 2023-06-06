class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int mid = s.size();
        for (int i = 0; i < mid; i++)
        {
            if (s[i] == s[s.size() - 1 - i]) continue;

            s[i] < s[s.size() - 1 - i] ? s[s.size() - 1 - i] = s[i] : s[i] = s[s.size() - 1 - i];
        }
        return s;
    }
};