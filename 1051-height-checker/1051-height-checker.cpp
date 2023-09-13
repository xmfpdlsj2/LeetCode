class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ret{};
        std::vector<int> decen{};
        for (auto& e : heights)
        {
            decen.push_back(e);
        }
        std::sort(heights.begin(), heights.end());
        for (int i = 0; i < heights.size(); i++)
        {
            if (decen[i] != heights[i])
            {
                ret++;
            }
        }
        return ret;
    }
};