class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        std::vector<std::string> table(n);
        for (int i = 0; i < n; i++)
        {
            if ((i + 1) % 15 == 0)
            {
                table[i] = "FizzBuzz";
            }
            else if ((i + 1) % 3 == 0)
            {
                table[i] = "Fizz";
            }
            else if ((i + 1) % 5 == 0)
            {
                table[i] = "Buzz";
            }
            else
            {
                table[i] = std::to_string(i + 1);
            }
        }
        return table;
    }
};