class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> dict;
        vector<int> ans;
        for(int i = 0; i < nums1.size(); ++i)
        {
            dict[nums1[i]] = i;
        }
        
        for(int i = 0; i < nums1.size(); ++i)
        {
            ans.push_back(-1);
        }
        
        stack<int> st;
        for(int i = 0; i < nums2.size(); ++i)
        {
            while(st.size() && nums2[i] > st.top())
            {
                int temp = st.top();
                st.pop();
                int idx = dict[temp];
                ans[idx] = nums2[i];
            }
            
            
            if(dict.count(nums2[i]))
            {
                st.push(nums2[i]);
            }
        }
        
        return ans;
    }
};