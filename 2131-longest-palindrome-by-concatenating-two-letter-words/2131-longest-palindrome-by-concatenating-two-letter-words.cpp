class Solution {
public:
    int longestPalindrome(vector<string>& words) 
    {
        std::unordered_map<std::string, int> map{};
        std::unordered_map<std::string, int> mapSame{};
        std::string rev{""};

        int pal{}, same{}, sone{};
        for (auto& word : words)
        {
            rev.clear();
            rev += word[1];
            rev += word[0];
            if (word == rev)
            {
                sone++;
                if (++mapSame[word] >= 2)
                {
                    mapSame[word] = 0;
                    same++;
                    sone -= 2;
                }
                continue;
            }

            if (map[word] == 0 && map[rev] == 0)
            {
                map[word]++;
            }
            else
            {
                if (map[word] != 0)
                {
                    map[word]++;
                }
                else
                {
                    map[rev]--;
                    pal++;
                }
            }
        }

        sone = sone != 0 ? 2 : 0;
        same *= 4;
        pal *= 4;
        return pal + same + sone;
    }
};