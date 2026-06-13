class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        while(tokens.size() > 1)
        {
            for(int i = 0 ; i < tokens.size() ; i++)
            {
                char op = '0';
                if(tokens[i] == "+")
                    op = '+';
                else if(tokens[i] == "-")
                    op = '-';
                else if(tokens[i] == "*")
                    op = '*';
                else if(tokens[i] == "/")
                    op = '/';

                if(op != '0')
                {
                    int b = stoi(tokens[i-1]);
                    int a = stoi(tokens[i-2]);
                    int res ;
                    if(op == '+')
                        res = a + b;
                    else if(op == '-')
                        res = a - b;
                    else if(op == '*')
                        res = a * b;
                    else
                        res = a / b;

                    tokens.erase(tokens.begin() + i - 2, tokens.begin() + i + 1);
                    tokens.insert(tokens.begin() + i - 2, to_string(res));
                    break;
                }
            }
        }
        return stoi(tokens[0]);
    }
};
