class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> dict;
        for(char c : text)
        {
            dict[c] += 1;
        }
        
        string target = "balon";
        vector<int> count;
        
        for (char c : target)
        {
            int temp = dict[c];
            if(c == 'l' || c == 'o')
            {
                count.push_back(temp/2);
            }
            else
            {
                count.push_back(temp);
            }
        }
        
        for(int i : count)
        {
            cout << i << endl;
        }
        return *min_element(count.begin(), count.end());
    }
};