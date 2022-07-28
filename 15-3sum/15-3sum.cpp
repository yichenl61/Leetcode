class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 2; ++i)
        {
            if(i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            int x = i + 1;
            int y = nums.size() - 1;
            while(x < y)
            {
                int sum = nums[i] + nums[x] + nums[y];
                if(sum == 0)
                {
                    ans.push_back({nums[i], nums[x], nums[y]});
                    x ++;
                    while(nums[x] == nums[x - 1] && x < y)
                    {
                        x++;
                    }
                }
                else if(sum > 0)
                {
                    y --;
                }
                else
                {
                    x ++;
                }
            }
        }
        return ans;
    }
};