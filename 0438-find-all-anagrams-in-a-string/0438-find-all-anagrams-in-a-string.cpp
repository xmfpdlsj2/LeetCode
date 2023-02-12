class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        if (s.length() < p.length()) return {};

        std::vector<int> freq_p(26, 0);
        std::vector<int> window(26, 0);

        //first window
        for (int i = 0; i < p.length(); i++) 
        {
            freq_p[p[i] - 'a']++;
            window[s[i] - 'a']++;
        }

        std::vector<int> ans;
        if (freq_p == window) ans.push_back(0);

        for (int i = p.length(); i < s.length(); i++) 
        {
            window[s[i - p.length()] - 'a']--;
            window[s[i] - 'a']++;

            if (freq_p == window) 
            {
                ans.push_back(i - p.length() + 1);
            }
        }
        return ans;
    }
};