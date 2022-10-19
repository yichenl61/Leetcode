class Solution {
private:
    int helper(vector<int>& nums, int start, int end) {
        int rob1 = 0;
        int rob2 = 0;
        
        for(int i = start; i < end; ++i)
        {
            int temp = max(rob1 + nums[i], rob2);
            rob1 = rob2;
            rob2 = temp;
        }
        return rob2;
    }
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1)
        {
            return nums[0];
        }
        int rob1 = helper(nums, 1, nums.size());
        int rob2 = helper(nums, 0, nums.size() - 1);
        return max(rob1, rob2);

    }
};