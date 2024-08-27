class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int max = 0;

        int str = prices[0];
        int len = prices.size();

        for(int i = 1;i<len; i++)
        {
            if(str < prices[i])
                max += prices[i] - str;
            str = prices[i];
        }

        return max;
    }
};