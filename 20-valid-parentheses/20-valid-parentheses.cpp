class Solution {
public:
    bool isValid(string s) {
        stack<char> left;
        for(char c : s)
        {
            if(c == '{' || c == '[' || c == '(')
            {
                left.push(c);
            }
            else if(!left.empty())
            {
                if(c == '}' && left.top() == '{')
                {
                    left.pop();
                }
                else if(c == ')' && left.top() == '(')
                {
                    left.pop();
                }
                 else if(c == ']' && left.top() == '[')
                {
                    left.pop();
                }
                else{
                return false;
                }
            }
            else{
                return false;
                }
            
        }
        
        return left.empty();
    }
    
};