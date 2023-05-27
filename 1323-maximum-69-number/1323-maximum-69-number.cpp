class Solution {
public:
    int maximum69Number (int num) {
        int ret{};
        std::string nums = std::to_string(num);
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == '6')
            {
                nums[i] = '9';
                break;
            }
        }
        ret = std::stoi(nums);
        return ret;
    }
};