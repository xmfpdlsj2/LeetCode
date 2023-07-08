class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        	std::vector<int> ret(nums.size(), -1);
        for (int i = 0; i < nums.size(); i++)
        {
            std::vector<int>::iterator iter = ret.begin();
            for (int j = 0; j < index[i]; j++)
            {
                iter++;
            }
            if (ret[index[i]] != -1)
            {
                ret.insert(iter, nums[i]);
                ret.pop_back();
            }
            else
            {
                ret[index[i]] = nums[i];
            }
        }
        return ret;
    }
};