class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (auto& num : nums) freq[num]++;

        // find the maximum frequency
        int maxFreq = 0;
        for (auto& [num, f] : freq) maxFreq = max(maxFreq, f);
        
        // calculate the sum of the frequencies with `maxFreq`
        int result = 0;
        for (auto& [num, f] : freq) {
            if (f == maxFreq) result += f;
        }
        return result;
    }
};