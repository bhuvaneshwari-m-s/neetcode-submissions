class Solution {
public:
    int dfs(vector<string>& tokens)
    {
        string token = tokens.back();
        tokens.pop_back();

        if(token != "+" and token != "-" and token != "*" and token != "/")
            return stoi(token);

        int right = dfs(tokens);
        int left = dfs(tokens);

        int res ;
        if(token == "+")
            res = left + right;
        else if(token == "-")
            res = left - right;
        else if(token == "*")
            res = left * right;
        else
            res = left / right;
        
        return res;
    }
    
    int evalRPN(vector<string>& tokens) {
        return dfs(tokens);
    }
};
