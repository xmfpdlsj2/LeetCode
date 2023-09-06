class Solution {
public:
    vector<int> sumZero(int n) {
        std::vector<int> ret{};
		if(n%2!=0) ret.push_back(0);
        n/=2;
        for(int i=1; i<=n; i++){
            ret.push_back(i);
            ret.push_back(-1*i);
        }
		
		return ret;
    }
};