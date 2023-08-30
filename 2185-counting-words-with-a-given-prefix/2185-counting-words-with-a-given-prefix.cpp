class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ret{};
        for (int i = 0; i < words.size(); i++)
        {
            bool isDone = true;
            for (int j = 0; j < pref.size(); j++)
            {
                if (words[i][j] != pref[j]) {
                    isDone = false;
                    break;
                }
                isDone =true;

            }
            if (isDone) ret++;
        }
        return ret;
    }
};