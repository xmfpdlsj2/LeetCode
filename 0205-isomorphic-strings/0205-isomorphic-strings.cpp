class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        std::vector<int> compare;

        std::map<char, int> ascii;
        for (int i = 'a'; i < 'z' + 1; i++)
        {
            ascii.insert({ static_cast<char>(i), 0 });
        }

        int count{ 1 };
        for (auto& e : s)
        {
            if (ascii[e] == 0)
            {
                ascii[e] = count;
                compare.push_back(count);
                count++;
            }
            else
            {
                compare.push_back(ascii[e]);
            }
        }

        ascii.clear();
        count = 1;
        int i{};
        for (auto& e : t)
        {
            if (ascii[e] == 0)
            {
                ascii[e] = count;

                if (compare[i] != count)
                {
                    std::cout << "false" << std::endl;
                    return false;
                }
                count++;
            }
            else
            {
                if (compare[i] != ascii[e])
                {
                    std::cout << "false" << std::endl;
                    return false;
                }
            }
            i++;
        }
        std::cout << "true" << std::endl;
        return true;
        
    }
};