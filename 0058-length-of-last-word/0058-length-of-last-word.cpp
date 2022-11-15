class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length() - 1;
        while(len >= 0 && s[len] == ' ')
        {
            len --;
        }
        
        int ans = 0;
        while(len >= 0 && s[len] != ' ')
        {
            ans ++;
            len --;
        }
        return ans;
    }
};