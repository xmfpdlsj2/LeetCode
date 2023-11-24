class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int ret {};
        while (mainTank >= 5)
        {
            mainTank -= 5;
            if (additionalTank-- > 0)
            {
                mainTank++;
            }
            ret += 5;
        }
        ret += mainTank;
        return ret * 10;
    }
};