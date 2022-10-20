class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] == 0)
            {
                swap(nums[i], nums[left++]);
            }
            else if(nums[i] == 2 && i < right)
            {
                swap(nums[i--], nums[right--]);
            }
        }
    }
};