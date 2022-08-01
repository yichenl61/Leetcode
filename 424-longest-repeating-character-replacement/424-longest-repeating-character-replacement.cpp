class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0, ans = 0, max_w = 0;
        unordered_map<char, int> count;
        while(r < s.size())
        {
            char temp = s[r];
            count[temp] ++;
            max_w = max(max_w, count[temp]);
            if((r - l + 1) - max_w > k)
            {
                char temp2 = s[l];
                count[temp2] --;
                l ++;      
            }
            ans = max(ans, (r - l + 1));
            r ++;
        }
        return ans;
        
    }
};