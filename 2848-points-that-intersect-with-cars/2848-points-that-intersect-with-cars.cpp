class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0, k = 0;
        for(auto &i: nums){
            if(i[1]>k){
                ans += i[1]-max(i[0]-1,k);
            }
            k = max(i[1],k);
        }
        cout<<endl;
        return ans;
    }
};