class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        std::vector<int> ret{};
        int temp{ first };
        ret.push_back(first);
        for (auto& e : encoded)
        {
            temp ^= e;
            ret.push_back(temp);
        }
        return ret;
    }
};