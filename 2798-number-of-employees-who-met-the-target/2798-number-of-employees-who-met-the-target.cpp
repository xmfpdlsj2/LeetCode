class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int ret{};
        for (int i = 0; i < hours.size(); i++)
        {
            if (hours[i] < target)
            {
                continue;
            }
            ret++;
        }
        return ret;
    }
};