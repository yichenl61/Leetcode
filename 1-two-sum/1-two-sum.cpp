class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> temp;
        std::vector<int> ans;
        for(int i = 0; i < nums.size(); ++i)
        {
            int diff = target - nums[i];
            if(temp.find(diff) != temp.end())
            {
                ans.push_back(i);
                ans.push_back(temp[diff]);
            }
            else
            {
                temp[nums[i]] = i;
            }
        }
        return ans;
    }
};