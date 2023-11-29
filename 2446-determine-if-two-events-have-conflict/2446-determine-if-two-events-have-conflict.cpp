class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        return event2[0] <= event1[1] and event2[1] >= event1[0];
    }
};