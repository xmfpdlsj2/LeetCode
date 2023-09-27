class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ret{};
        std::sort(boxTypes.begin(), boxTypes.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[1] > b[1];
            });
        for (int i = 0; i < boxTypes.size(); i++)
        {
            if (truckSize <= 0) break;
            int boxs = boxTypes[i][0] > truckSize ? truckSize : boxTypes[i][0];

            ret += boxs * boxTypes[i][1];
            truckSize -= boxs;
        }
        return ret;
    }
};