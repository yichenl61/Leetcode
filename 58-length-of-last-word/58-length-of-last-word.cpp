class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream ss(s);
        vector<string> temp;
        string word;
        while(ss >> word)
        {
            temp.push_back(word);
        }
        return temp[temp.size() - 1].length();
    }
};