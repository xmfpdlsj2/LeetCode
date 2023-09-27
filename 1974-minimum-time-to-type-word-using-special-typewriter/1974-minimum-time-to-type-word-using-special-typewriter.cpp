class Solution {
public:
    int minTimeToType(string word) {
        int total = 'z' - 'a' + 1, ret{};
        char currentPointer = 'a';
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] != currentPointer)
            {
                int absMove = std::abs(word[i] - currentPointer);
                ret += std::min(absMove, total - absMove);
                currentPointer = word[i];
            }
            ret++;  
        }
        return ret;
    }
};