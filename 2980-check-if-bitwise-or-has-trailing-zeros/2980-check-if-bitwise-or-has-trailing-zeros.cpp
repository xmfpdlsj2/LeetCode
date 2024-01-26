class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int count_even = 0;
        for (auto& num : nums) 
        {
            if ((num & 1) == 0) count_even++;
        }

        return (count_even >= 2);
    }
};