class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<int>dp(60,0);  // number of set bits in ith 
        for(int i=1;i<60;i++)
            dp[i]=dp[i/2]+(i&1);
        
        vector<string>res;
        
        for(int hr=0;hr<12;hr++){
            for(int i=0;i<60;i++)
                if(dp[i]+dp[hr]==turnedOn) {
                    if(i<10) res.push_back(to_string(hr)+":0"+to_string(i));
                    else res.push_back(to_string(hr)+":"+to_string(i));
                }
        }
        return res;
    }
};