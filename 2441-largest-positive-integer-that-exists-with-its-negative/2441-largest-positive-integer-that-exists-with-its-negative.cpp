class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> table;
        int ret = -1;
        for(auto i : nums) 
        {
            table.insert(i);
        }
        
        for(auto i : table) 
        {
            if(table.find(-i) != table.end()) 
            {
                ret = max(ret, std::abs(i));
            }
        }
        return ret;
    }
};