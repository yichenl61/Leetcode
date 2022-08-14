class Solution {
private:
    priority_queue<pair<double, vector<int>>> maxH;
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        for(int i = 0; i < points.size(); ++i)
        {
            double dist = sqrt(pow(points[i][0], 2) + pow(points[i][1], 2));
            maxH.push({dist, points[i]});
            if(maxH.size() > k)
            {
                maxH.pop();
            }
        }
        
        vector<vector<int>> ans;
        while(!maxH.empty())
        {
            ans.push_back(maxH.top().second);
            maxH.pop();
        }
        return ans;
    }
};