class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> letters;
        for (char c : magazine) 
        {
            letters[c]++;
        }
        for (char c : ransomNote) 
        {
            if (letters[c] > 0) 
            {
                letters[c]--;
            } else 
            {
                return false;
            }
        }
        return true;
    }
};