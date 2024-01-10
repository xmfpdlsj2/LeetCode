class Solution {
public:
    int minMaxGame(vector<int>& nums) 
    {
         while(nums.size()!=1)
         {
            vector<int>currvect;
            bool flag = true;
            for(int i=0;i<nums.size()-1;i++)
            {
                if(flag)
                {
                  currvect.push_back(min(nums[i],nums[i+1]));
                   flag = false;
                }
                else
                {
                   currvect.push_back(max(nums[i],nums[i+1]));
                   flag = true;
                }
                i++;
            }
         nums = currvect;
        }
        return nums[0];
    }
};