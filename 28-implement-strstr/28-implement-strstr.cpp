class Solution {
public:
    int strStr(string haystack, string needle) {
        int haystacksize = haystack.length();
        int needlesize = needle.length();
        
        if(needle.empty())
        {
            return 0;
        }
        
        if(haystacksize < needlesize)
        {
            return -1;
        }
        
        int loc = haystack.find(needle);
        if(loc != std::string::npos)
        {
            return loc;
        }
        else
        {
            return -1;
        }
    }
};