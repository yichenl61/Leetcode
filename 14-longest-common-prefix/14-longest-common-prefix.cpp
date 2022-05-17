class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string small= strs[0];
        for(int i = 0; i < strs.size(); ++i)
        {
            if(strs[i].length() < small.length())
            {
                small = strs[0];
            }
        }
        
        string answer = "";
        
        for(int j = 0; j < small.length(); ++j)
        {
            char letter = strs[0][j];
            for(int i = 1; i < strs.size(); ++i)
            {
                if(strs[i][j] != letter)
                {
                    return answer;
                }
                
            }
            answer += letter;
        }
        return answer;
        
    }
};