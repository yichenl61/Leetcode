class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        int right = 1;
        while(right < nums.size())
        {
            if(nums[left] == 0)
            {
                if(nums[right] != 0)
                {
                    nums[left] = nums[right];
                    nums[right] = 0;
                    left ++;
                }
                right ++;
            }
            else
            {
                left ++;
                right ++;
            }
        }
    }
};