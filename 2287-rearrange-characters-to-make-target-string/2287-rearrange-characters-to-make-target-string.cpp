class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> alphacnt(26, 0);
        // Construct the Frequency vector using 
        // the ascii values of the characters in the string s
        for(const auto& ch: s)
        {            
            alphacnt[ch- 'a']++;
        }

        for(int cnt = 0; true; cnt++) 
        // this loop has no termination condition;
        // it increases cnt everytime we traverse the 
        // target string without seeing negative frequncy values
        {
            for(char ch: target)
            {
                int idx = ch-'a';
                alphacnt[idx]--;
                // check for negative frequencies,
                // return if found
                if (alphacnt[idx] < 0) return cnt;
            }
        }
        return 1;
    }
};