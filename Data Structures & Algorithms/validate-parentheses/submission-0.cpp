class Solution {
public:
    bool compare(char a, char b)
    {
        if(a == '(' && b == ')')
            return true;
        if(a == '{' && b == '}')
            return true;
        if(a == '[' && b == ']')
            return true;
        return false;
    }
    
    bool isValid(string s) {
        stack<char> st;
        int i = 0;
        while(i < s.length())
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else
            {
                if(st.empty())
                    return false;
                if(!compare(st.top(), s[i]))
                    return false;
                st.pop();
            }
            i++;
        }

        return st.empty() ? true : false;

    }
};
