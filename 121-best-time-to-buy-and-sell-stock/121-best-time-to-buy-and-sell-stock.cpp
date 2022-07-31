class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*
        int l = 0;
        int r = 1;
        
        int ans = 0;
        
        while(r < prices.size())
        {
            if(prices[r] > prices[l])
            {
                int pro = prices[r] - prices[l];
                ans = max(pro, ans);
            }
            else
            {
                ++l;
            }
            ++r;
        }
        return ans;
        */
        int minB = prices[0];
        int ans = 0;
        
        for(int i = 0; i < prices.size(); ++i)
        {
            minB = min(minB, prices[i]);
            ans = max(ans, prices[i] - minB);
        }
        return ans;
    }
};