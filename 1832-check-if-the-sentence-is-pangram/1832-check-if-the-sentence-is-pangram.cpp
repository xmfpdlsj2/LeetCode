class Solution {
public:
    bool checkIfPangram(string sentence) {
        std::vector<int> table(128);
        for (int i = 0; i < sentence.size(); i++)
        {
            table[sentence[i]]++;
        }
        for (int i = 0; i < table.size(); i++)
        {
            if (i >= 'a' && i <= 'z')
            {
                if (table[i] <= 0) return false;
            }
        }
        return true;
    }
};