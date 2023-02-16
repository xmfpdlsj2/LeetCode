class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        std::vector<int> asciis(128, -1);
        std::vector<int> asciit(128, -1);
        std::vector<int> sOrder{};
        std::vector<int> tOrder{};

        int count{};
        for (int i = 0; i < s.size(); i++)
        {
            if (asciis[s[i]] == -1)
            {
                asciis[s[i]] = count;
                sOrder.push_back(count);
                count++;
            }
            else
            {
                sOrder.push_back(asciis[s[i]]);    
            }
        }

        count = 0;
        for (int i = 0; i < t.size(); i++)
        {
            if (asciit[t[i]] == -1)
            {
                asciit[t[i]] = count;
                tOrder.push_back(count);
                count++;
            }
            else
            {
                tOrder.push_back(asciit[t[i]]);    
            }
        }
        return sOrder == tOrder;
    }
};