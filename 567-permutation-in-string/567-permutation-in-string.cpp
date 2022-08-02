class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> window(26,0), target(26,0);
        for(int i = 0; i < s1.size(); ++i)
        {
            target[s1[i] - 'a'] ++;
        }
        
        int i = 0, j = 0;
        
        while(j < s2.size())
        {
            window[s2[j] - 'a'] ++;
            
            if(j - i + 1 == s1.size())
            {
                if(window == target)
                {
                    return true;
                }
                window[s2[i] - 'a'] --;
                i ++;
                j ++;

            }
    
            if(j - i + 1 < s1.size())
            {
                j++;
            }
        }
        return false;
        
    }
};