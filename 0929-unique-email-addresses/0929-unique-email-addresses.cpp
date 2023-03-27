#include <unordered_map>


class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map <string, int> dict;
        for(string e : emails)
        {
            int at_loc = e.find('@');
            string local = e.substr(0, at_loc);
            string domain = e.substr(at_loc);
            local.erase(remove(local.begin(), local.end(), '.'), local.end());
            local = local.substr(0, local.find('+'));
            dict[local + domain] ++;
        }
        
        return dict.size();
    }
};