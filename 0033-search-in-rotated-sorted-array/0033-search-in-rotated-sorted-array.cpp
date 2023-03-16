class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        
        int size=nums.size();
        int s{}, e{ size-1 },m{};
        while(s<=e)
        {
            m=s+(e-s)/2;
            if(nums[m]==target)
            {
                return m;
            }
            if(nums[m]>=nums[s])
            {
                if(nums[m]>=target && nums[s]<=target)
                {
                    e=m-1;
                }
                else
                {
                    s=m+1;    
                } 
            }
            else
            {
                if(nums[m]<=target && nums[e]>=target)
                {
                    s=m+1;
                }
                else 
                {
                    e=m-1;
                }
            }
        }
        return -1;
    }
};