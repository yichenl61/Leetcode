class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }
        
        std::unordered_map<char, int> counts, countt;
        for(int i = 0; i < s.length(); ++i)
        {
            counts[s[i]] ++;
            countt[t[i]] ++;
        }
        if(counts != countt)
        {
            return false;
        }
        return true;
    }
};