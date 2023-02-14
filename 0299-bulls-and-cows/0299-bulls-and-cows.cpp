class Solution {
public:
    std::string getHint(std::string secret, std::string guess)
    {
        std::vector<int> table(60);
        int bulls{}, cows{};
        for (int i = 0; i < secret.length(); i++)
        {
            if (secret[i] == guess[i])
            {
                bulls++;
            }

            table[secret[i]]++;
            table[guess[i]]--;
        }

        for (auto& e : table)
        {
            if (e > 0)
            {
                cows += e;
            }
        }
        cows = secret.length() - cows - bulls;

        std::stringstream result;
        result << bulls << 'A' << cows << 'B';
        return result.str();
    }
};