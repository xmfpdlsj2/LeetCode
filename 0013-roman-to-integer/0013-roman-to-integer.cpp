class Solution {
public:
    int romanToInt(string s) 
    {
        std::vector<int> romanNums(128);
        romanNums['I'] = 1;
        romanNums['V'] = 5;
        romanNums['X'] = 10;
        romanNums['L'] = 50;
        romanNums['C'] = 100;
        romanNums['D'] = 500;
        romanNums['M'] = 1000;

        int sum{ romanNums[s[0]] };
        for (int i = 1; i < s.length(); i++)
        {
            if ((s[i] == 'M' || s[i] == 'D') && s[i - 1] == 'C')
            {
                sum -= romanNums['C'] * 2;
            }
            else if ((s[i] == 'L' || s[i] == 'C') && s[i - 1] == 'X')
            {
                sum -= romanNums['X'] * 2;
            }
            else if ((s[i] == 'V' || s[i] == 'X') && s[i - 1] == 'I')
            {
                sum -= romanNums['I'] * 2;
            }

            sum += romanNums[s[i]];
        }
        return sum;
    }
};