class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        std::vector<int> length{};
        int count{};
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                if (count != 0)
                {
                    length.push_back(count);
                    count = 0;
                }
                continue;
            }
            count++;
        }
        if (count != 0)
        {
            length.push_back(count);
        }
        return length[length.size() - 1];
    }
};