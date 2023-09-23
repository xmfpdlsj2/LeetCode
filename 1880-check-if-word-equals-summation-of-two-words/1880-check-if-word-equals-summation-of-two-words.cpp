class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int sum{}, target{};
        for (int i = 0, j = firstWord.size() - 1; i < firstWord.size(); i++, j--)
        {
            sum += (firstWord[i] - 'a') * std::pow(10, j);
        }

        for (int i = 0, j = secondWord.size() - 1; i < secondWord.size(); i++, j--)
        {
            sum += (secondWord[i] - 'a') * std::pow(10, j);
        }

        for (int i = 0, j = targetWord.size() - 1; i < targetWord.size(); i++, j--)
        {
            target += (targetWord[i] - 'a') * std::pow(10, j);
        }

        return sum == target;
    }
};