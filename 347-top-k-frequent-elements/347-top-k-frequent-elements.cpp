class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> dict;
        for(int i:nums)
        {
            dict[i] ++;
        }
        priority_queue<pair<int,int>> temp;
        for(auto [i,j]:dict)
        {
            temp.push({j,i});
        }
        
        vector<int> ans;
        while(k)
        {
            ans.push_back(temp.top().second);
            temp.pop();
            k--;
        }
        
        return ans;
        
    }
};