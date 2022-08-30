class Solution {
private:
    vector<vector<int>> ans;
    void helper(int sum, int start, vector<int>& candidates, int target, vector<int>& temp)
    {
        if(sum > target)
        {
            return;
        }
        
        if(sum == target)
        {
            ans.push_back(temp);
            return;
        }
        
        for(int i = start; i < candidates.size(); ++i)
        {
            temp.push_back(candidates[i]);
            helper(candidates[i] + sum, i, candidates, target, temp);
            temp.pop_back();
        }
    }
        
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<int> temp;
        helper(0, 0, candidates, target, temp);
        return ans;
    }
};