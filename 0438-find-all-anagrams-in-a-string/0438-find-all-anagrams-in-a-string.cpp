class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        std::vector<int> comp(26, 0);
        std::vector<int> win(26, 0);
        std::vector<int> result{};
        
        for (int i = 0; i < p.length(); i++) 
        {
            comp[p[i] - 'a']++;
        }

        for (int i = 0; i + p.length() - 1 < s.length(); i++)
        {
            auto winTemp = win;
            for (int j = 0; j < p.length(); j++)
            {
                winTemp[s[i+j] - 'a']++;
            }

            if (comp == winTemp)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};