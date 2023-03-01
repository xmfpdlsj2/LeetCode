class Solution {
public:
    struct comp
    {
        bool operator()(const std::pair<int, std::string>& a, const std::pair<int, std::string> b)
        {
            if (a.first == b.first)
            {
                return a.second > b.second;
            }
            return a.first < b.first;
        }
    };

    std::vector<std::string> topKFrequent(std::vector<std::string>& words, int k)
    {
        std::unordered_map<std::string, int> sFreq{};

        for (auto& word : words)
        {
            sFreq[word]++;
        }

        std::priority_queue<std::pair<int, std::string>, std::vector<std::pair<int, std::string>>, comp> pq{};
        for (auto& freq : sFreq)
        {
            pq.emplace(freq.second, freq.first);
        }

        std::vector<std::string> result{};
        for (int i = 0; i < k; i++)
        {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};