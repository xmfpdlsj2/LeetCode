class Solution {
public:
    bool backspaceCompare(std::string s, std::string t)
    {
        std::stack<char> sStack{};
        std::stack<char> tStack{};

        int size = s.length() > t.length() ? s.length() : t.length();
        for (int i = 0; i < size; i++)
        {
            if (s.length() > i)
            {
                if (s[i] == '#')
                {
                    if (sStack.size() != 0)
                    {
                        sStack.pop();
                    }
                }
                else
                {
                    sStack.push(s[i]);
                }
            }

            if (t.length() > i)
            {
                if (t[i] == '#')
                {
                    if (tStack.size() != 0)
                    {
                        tStack.pop();
                    }
                }
                else
                {
                    tStack.push(t[i]);
                }
            }
        }

        return sStack == tStack;
    }
};