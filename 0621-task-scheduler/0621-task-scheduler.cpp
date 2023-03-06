class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) 
    {
        std::vector<int> ascii(128);
        int max{}, least{};
        for (auto& c : tasks)
        {
            max = std::max(max, ++ascii[c]);
        }

        least = (max - 1) * (n + 1);
        for (auto& num : ascii)
        {
            if (max == num)
            {
                least++;
            }
        }
        return std::max(least, static_cast<int>(tasks.size()));
    }
};