class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        std::queue<int> zIndex{};
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                zIndex.push(i);
            }
            if (nums[i] != 0 && zIndex.size() != 0)
            {
                nums[zIndex.front()] = nums[i];
                nums[i] = 0;
                zIndex.pop();
                zIndex.push(i);
            }
        }
            
    }
};