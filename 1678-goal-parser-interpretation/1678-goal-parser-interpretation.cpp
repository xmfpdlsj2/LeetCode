class Solution {
public:
    string interpret(string command) {
        std::string ret{};
        std::stack<char> table{};
        for(int i = 0; i < command.size(); i++) 
        {
            if (command[i] == ')' && command[i - 1] == '(')
            {
                ret.push_back('o');
            }
            else if (command[i] != '(' && command[i] != ')') 
            {
                ret.push_back(command[i]);
            }
        }
        return ret;
    }
};