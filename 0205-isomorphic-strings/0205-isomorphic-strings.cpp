class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, vector<int>> dict1;
        unordered_map<char, vector<int>> dict2;
    
        for(int i = 0; i < s.length(); ++i)
        {
            dict1[s[i]].push_back(i);
            dict2[t[i]].push_back(i);
            
            if(dict1[s[i]] != dict2[t[i]])
            {
                return false;
            }
            
    }
        return true;
    }
};