class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cnt{},cnt1{};
        for(auto it: moves){
            if(it=='L'){cnt--; cnt1--;}
            else if(it=='_'){cnt--; cnt1++;}
            else if(it=='R'){cnt++; cnt1++ ;}
        }
        return max(abs(cnt1),abs(cnt));
    }
};