class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int index{};
        char pFrist{};
        
        if(s.size() == 0 && t.size() == 0)
        {
            return true;
        }
        
        for (auto& e : t)
        {
            pFrist = s[index];

            if (pFrist == e)
            {
                index++;
            }

            if (index == s.size())
            {
                std::cout << "true" << std::endl;
                return true;
            }
        }
        std::cout << "False2" << std::endl;
        return false;
    }
};