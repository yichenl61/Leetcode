class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> window;
        int l = 0;
        int r = 0;
        int ans = 0;
        while(r < s.size())
        {
            char temp = s[r];
            r ++;
            window[temp] ++;
            while(window[temp] > 1)
            {
                char temp2 = s[l];
                l ++;
                window[temp2] --;
            }
            ans = max(ans, r - l);
        }
        return ans;
        }
};