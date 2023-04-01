class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>dict(nums.begin(), nums.end());
        int max_l = 0;
        for(int i : dict)
        {
            if(dict.count(i - 1) == 0)
            {
                int l = 1;
                while(dict.count(i + l))
                {
                    l ++;
                }
                max_l = max(max_l, l);
                
            }
        }
        return max_l;
    }
};