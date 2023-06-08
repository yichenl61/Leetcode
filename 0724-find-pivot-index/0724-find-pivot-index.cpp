class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        
        for(int num : nums)
        {
            total += num;
        }
        
        int leftsum = 0;
        int rightsum = 0;
    
        for(int i = 0 ; i < nums.size(); ++i)
        {
            rightsum = total - nums[i] - leftsum;
            
            if(rightsum == leftsum)
            {
                return i;
            }
            leftsum += nums[i];
        }
        
        return -1;
        
    }
};