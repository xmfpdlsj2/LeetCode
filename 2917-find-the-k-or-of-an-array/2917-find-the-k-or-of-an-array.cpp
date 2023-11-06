class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int ans = 0;
        vector<int> freq(32, 0);
        for(auto n:nums)
        {
            for(int i = 0; i < 32; ++i)
            {
                if(n & (1 << i)) freq[i]++;
            }
        }
        for(long long i = 0, p = 1; i < freq.size(); ++i, p *= 2)
        {
            if(freq[i] >= k) ans += p;
        }
        return ans;
    }
};