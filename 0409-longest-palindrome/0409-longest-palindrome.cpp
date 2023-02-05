class Solution {
public:
    int longestPalindrome(string s) 
    {
         std::unordered_map<char, int> table{};
	     int lengthOfPalindrome{};
         int oneCheck{};

         for (auto& letter : s)
         {
             letter = letter - 'a' + 'A';
             oneCheck++;
             if (++table[letter] == 2)
             {
                 table[letter] = 0;
                 lengthOfPalindrome += 2;
                 oneCheck -= 2;
             }
         }

         if (oneCheck > 0)
         {
             lengthOfPalindrome++;
         }

         return lengthOfPalindrome;
    }
};