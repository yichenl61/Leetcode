class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        
        vector<int> ans;
        
        while(l < r)
        {
            int area = (r - l) * min(height[l], height[r]);
            ans.push_back(area);
            
            if(height[l] > height[r])
            {
                r --;
            }
            else
            {
                l ++;
            }
        }
        
        return *max_element(ans.begin(), ans.end());
    }
};