class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        std::vector<int> ascii(128, 0);

        int index{}, longest{};
        for (int i = 0; i < s.size(); i++) 
        {
            ascii[s[i]]++;
            while (ascii[s[i]] > 1)
            {
                ascii[s[index]]--;
                index++;
            }
            longest = std::max(longest, i - index + 1);
        }
        return longest;
    }
};