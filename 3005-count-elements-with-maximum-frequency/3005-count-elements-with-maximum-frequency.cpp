class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> v(101,0);
        int k = 0, ans = 0;
        for(auto &i: nums)
        {
            v[i]++;
            if(v[i]>k)
            {
                k = v[i],ans = v[i];
            }
            else if(v[i]==k)
            {
                ans += v[i];
            }
        }
        return ans;
    }
};