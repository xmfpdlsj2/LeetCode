class Solution {
public:
    int countPoints(string rings) {
        std::vector<std::vector<int>> table(10, std::vector<int>(3));
        int ret{};
        for (int i = 0; i < rings.size(); i += 2)
        {
            int RGB = rings[i] == 'R'
                ? 0
                : rings[i] == 'G'
                ? 1
                : 2;

            table[rings[i + 1] - '0'][RGB]++;
        }

        for (auto& e : table)
        {
            ret++;
            for (auto& i : e)
            {
                if (i == 0)
                {
                    ret--;
                    break;
                }
            }
        }
        return ret;
    }
};