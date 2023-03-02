class Solution {
public:
    bool isHappy(int n) 
    {
        std::unordered_set<int> set;
        std::string split{};
        split = std::to_string(n);

        while (n != 1 && !set.count(n))
        {
            set.insert(n);
            n = 0;
            for (auto& digit : split)
            {
                n += (digit - '0') * (digit - '0');
            }
            split.clear();
            split = std::to_string(n);
        }

        return n == 1;
    }
};