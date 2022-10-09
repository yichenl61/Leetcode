class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        
        string temp = words[0];
        ans.push_back(temp);
        sort(temp.begin(),temp.end());
        
        for(int i = 0; i < words.size(); ++i)
        {
            string new_temp = words[i];
            sort(new_temp.begin(), new_temp.end());
            if(new_temp == temp)
            {
                continue;
            }
            else
            {
                ans.push_back(words[i]);
                temp = new_temp;
            }
        }
        return ans;
    }
};