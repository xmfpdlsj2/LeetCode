class Solution {
public:
    bool isValid(string s) 
    {
        std::map<char, char> brPair{};
        brPair[')'] = '(';
        brPair['}'] = '{';
        brPair[']'] = '[';

        std::stack<char> brackets{};

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if (brackets.empty())
                {
                    return false;
                }
                
                if (brackets.top() != brPair[s[i]])
                {
                    return false;
                }
                brackets.pop();
            }
            else
            {
                brackets.push(s[i]);
            }
        }
        return brackets.empty();
    }
};