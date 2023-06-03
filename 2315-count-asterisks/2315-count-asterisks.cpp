class Solution {
public:
    int countAsterisks(string s) {
        int barCount{}, startCount{};

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '|') 
            {
                if (barCount == 2)
                {
                    barCount = 1;
                }
                else
                {
                    barCount++;
                }
            }
            if ((barCount == 2 or barCount == 0) && s[i] == '*')
            {
                startCount++;
            }
        }
        return startCount;
    }
};