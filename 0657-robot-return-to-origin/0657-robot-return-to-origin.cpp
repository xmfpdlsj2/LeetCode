class Solution {
public:
    bool judgeCircle(string moves) {
        std::unordered_map<char, int> table{};
        table['U'] = 0;
        table['D'] = 0;
        table['L'] = 0;
        table['R'] = 0;
        for (int i = 0; i < moves.size(); i++)
        {
            table[moves[i]]++;
        }
        if (table['U'] != table['D'] || table['L'] != table['R'])
        {
            return false;
        }
        return true;
    }
};