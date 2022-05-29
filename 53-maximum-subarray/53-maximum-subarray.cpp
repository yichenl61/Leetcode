class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        for(int i = 1; i < nums.size(); ++i)
        {
            if(nums[i - 1] > 0)
            {
                nums[i] += nums[i - 1];
            }
        }
        int max = *std::max_element(nums.begin(), nums.end());
        return max;
    }
};