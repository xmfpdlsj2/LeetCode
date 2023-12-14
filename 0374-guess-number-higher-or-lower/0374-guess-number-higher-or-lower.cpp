/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int GNum(int low, int high)
    {
        int mid = low + ((high - low)/2);
        // baseCase
        if (guess(mid) == 0)
        {
            return mid;
        }
        
        // recursiceCase
        if (guess(mid) == 1)
        {
            return GNum(mid + 1, high);
        }
        else
        {
            return GNum(low, mid - 1);
        }
    }
    int guessNumber(int n) {
        return GNum(1, n);
    }
};