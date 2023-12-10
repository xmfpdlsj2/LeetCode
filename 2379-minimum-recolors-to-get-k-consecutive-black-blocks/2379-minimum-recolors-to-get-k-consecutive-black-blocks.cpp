class Solution {
public:
    int minimumRecolors(string blocks, int k) {
            int front = 0;
            int back = 0;
            int whiteCount = 0;
            int ans = INT_MAX;
            while(front < blocks.size())
            {
                if(blocks[front] == 'W')
                {
                    whiteCount += 1;
                }
                if(front-back+1 >= k)
                {
                    ans = min(ans, whiteCount);
                    if(blocks[back] == 'W')
                    {
                        whiteCount--;
                    } 
                    back++;
                }
                front++;
            }
            return ans;
    }
};