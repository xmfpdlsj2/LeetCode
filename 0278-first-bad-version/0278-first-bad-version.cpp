// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        unsigned int vLeft{}, vRight{}, mid{};
        vRight = n;

        while (vLeft <= vRight)
        {
            mid = (vLeft + vRight) >> 1;

            if (isBadVersion(mid))
            {
                if (!isBadVersion(mid - 1))
                {
                    break;
                }
                vRight = mid - 1;
            }
            else
            {
                vLeft = mid + 1;
            }
        }

        return mid;
        
    }
};