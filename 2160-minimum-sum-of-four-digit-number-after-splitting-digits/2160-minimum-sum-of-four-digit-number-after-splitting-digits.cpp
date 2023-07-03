class Solution {
public:
    int minimumSum(int num) {
        std::vector<int> table{};
	    int temp{}; 
        for (int i = 0; i < 4; i++)
        {
            temp = num % 10;
            table.push_back(temp);
            num /= 10;
        }
        std::sort(table.begin(), table.end());
        return ((table[0] * 10) + table[2]) + ((table[1] * 10) + table[3]);
    }
};