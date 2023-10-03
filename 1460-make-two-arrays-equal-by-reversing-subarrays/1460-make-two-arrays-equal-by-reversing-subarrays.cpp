class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        std::sort(target.begin(), target.end());
        std::sort(arr.begin(), arr.end());
        if (target == arr) return true;
        return false;
    }
};