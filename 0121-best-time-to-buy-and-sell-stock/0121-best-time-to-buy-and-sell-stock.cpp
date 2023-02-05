class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
         int piv{ prices[0] };
         int maxProfit{};

         for (int i = 1; i < prices.size(); i++)
         {
             if (piv > prices[i])
             {
                 piv = prices[i];
             }
             auto gap =  prices[i] - piv;
             if (maxProfit < gap)
             {
                 maxProfit = gap;
             }
         }
         return maxProfit;
    }
};