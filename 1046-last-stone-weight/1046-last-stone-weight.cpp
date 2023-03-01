class Solution {
public:
    int lastStoneWeight(std::vector<int>& stones)
    {
        std::priority_queue<int> pq{};
        for (auto& stone : stones)
        {
            pq.emplace(stone);
        }

        while (pq.size() > 1)
        {
            int tWeight{ pq.top() }, nWeight{};
            pq.pop();
            nWeight = pq.top();
            pq.pop();

            if ((tWeight - nWeight) != 0)
            {
                pq.push(tWeight - nWeight);
            }
        }

        return pq.empty() ? 0 : pq.top();
    }   
};