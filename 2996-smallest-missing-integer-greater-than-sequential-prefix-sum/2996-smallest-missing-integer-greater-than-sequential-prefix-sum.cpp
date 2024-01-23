class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int ans = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i]!=nums[i-1]+1){break;}
            ans += nums[i];
        }
        set<int> s;
        for(auto &i: nums){
            s.insert(i);
        }
        while(!(s.count(ans)==0)){
            ans++;
        }
        return ans;
    }
};