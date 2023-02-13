class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        // freaking hard to understancd.... now
        
        std::vector<int> aschii(128);
        int beg{}, cMaxChar{};
        for(int i = 0; i < s.length(); i++)
        {
            aschii[s[i]]++;
            cMaxChar = std::max(cMaxChar, aschii[s[i]]);
            
            if (i - beg + 1 - cMaxChar > k)
            {
                aschii[s[beg]]--;
                beg++;
            }
        }
        
        return s.length() - beg;
    }
};