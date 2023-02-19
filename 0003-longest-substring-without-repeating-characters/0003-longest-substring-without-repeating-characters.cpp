class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        std::unordered_map<char, int> ascii;
        std::unordered_map<char, int> index;

        int longest{}, comp{};
        
        for (int i = 0; i < s.size(); i++)
        {
            if (++ascii[s[i]] > 1)
            {
                longest = std::max(comp, longest);
                ascii.clear();
                comp = 0;
                i = index[s[i]] + 1;
                ascii[s[i]]++;
                index.clear();
            }
            index[s[i]] = i;
            comp++;
        }
        
        longest = std::max(comp, longest);
        return longest;
    }
};