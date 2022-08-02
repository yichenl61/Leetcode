class Solution {
    void helper(int n, int left, int right, string str, vector<string>& ans)
    {
        if(left == n && right == n)
        {
            ans.push_back(str);
            return;
        }
        
        if(left < n)
        {
            helper(n, left + 1, right, str + "(", ans);
        }
        
        if(right < left)
        {
            helper(n, left, right + 1, str + ")", ans);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper(n, 0, 0, "", ans);
        return ans;

    }
};