class Codec {
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string msg = "";
        for (string str : strs)
        {
            msg += to_string(str.size()) + "#" + str;
            
        }
        
        return msg;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> ans;
        int counter = 0;
        while(counter < s.size())
        {
            int loc = counter;
            while(s[loc] != '#')
            {
                loc ++;
            }
            cout << s.substr(counter,loc - counter) << endl;
            int str_size = stoi(s.substr(counter,loc - counter));
            ans.push_back(s.substr(loc + 1, str_size));
            counter = loc + str_size +1;
        }
        return ans;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.decode(codec.encode(strs));