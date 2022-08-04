class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        
        int ans = right;
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            long int hours = 0;
            for(int i = 0; i < piles.size(); ++i)
            { 
                hours += ceil((double)piles[i] / mid);
            }
            if(hours > h)
            {
                left = mid + 1;
            }
            else
            {
                ans = min(ans, mid);
                right = mid - 1;
            }
        }
        return ans;
        
        
        
    }
};