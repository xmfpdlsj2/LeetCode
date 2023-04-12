class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if (s.size() < t.size())
        {
            return false;
        }
        std::vector<int> ascii(128, 0);
        for (int i = 0; i < t.size(); i++)
        {
            ascii[t[i]]++;
        }
        
        for (int i = 0; i < s.size(); i++)
        {
            if (--ascii[s[i]] < 0)
            {
                return false;
            }
        }
        
        return true;
    }
};