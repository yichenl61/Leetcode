class Solution {
private:
    vector<vector<int>> ans;
    vector<int> curr;
    
    void dfs(vector<int>& nums, int start)
    {
        ans.push_back(curr);
        for(int i = start; i < nums.size(); ++i)
        {
            curr.push_back(nums[i]);
            dfs(nums, i + 1);
            curr.pop_back();
        }
        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        dfs(nums, 0);
        return ans;
    }
};