class Solution {
public:
    bool isPerfectSquare(int num) {
        long comp{ 1 };
        while((comp * comp) < num)
        {
            comp++;
        }
        if ((comp * comp) == num) return true;
        return false;
    }
};