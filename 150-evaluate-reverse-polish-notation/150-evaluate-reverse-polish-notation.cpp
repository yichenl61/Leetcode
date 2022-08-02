class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(string temp:tokens)
        {
            if(temp == "+" || temp == "-" || temp == "*" || temp == "/")
            {
                int op2 = s.top();
                s.pop();
                int op1 = s.top();
                s.pop();
                if(temp == "+")
                {
                    s.push(op1 + op2);
                }
                else if(temp == "-")
                {
                    s.push(op1 - op2);
                }
                else if(temp == "*")
                {
                    s.push(op1 * op2);
                }
                else if(temp == "/")
                {
                    s.push(op1 / op2);
                }
                
            }
            else
            {
                s.push(stoi(temp));
            }
        }
        return s.top();
    }
};