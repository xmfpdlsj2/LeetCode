class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        std::vector<int> ret(nums.size());
        int isSingleZeor{};

        int product{1};
        for (auto& e : nums)
        {
            if (e == 0)
            {
                isSingleZeor++;
                continue;
            }
            if (isSingleZeor > 1)
            {
                break;
            }
            product *= e;
        }

        if (isSingleZeor > 1)
        {
            return ret;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (isSingleZeor > 0 && nums[i] != 0)
            {
                ret[i] = 0;
                continue;
            }

            if (nums[i] == 0)
            {
                ret[i] = product;
                continue;
            }
            ret[i] = product / nums[i];
        }

        return ret;
    }
};