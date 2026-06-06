class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size() == 0)
            return "";

        int i = 0;
        string res = "";
        for(auto& str : strs)
        {
            int len = str.length();
            res.append(to_string(len));
            res.push_back('#');
            res.append(str);
        }

        return res;
    }

    vector<string> decode(string s) {
        if(s.size() == 0)
            return {};
        vector<string> res;
        int i = 0;
        while(i < s.length())
        {
            int j = i;
            while(s[j] != '#')
            {
                j++;
            }
            int len = stoi(s.substr(i, j-i));
            res.push_back(s.substr(j+1, len));
            i = j + len + 1;
        }

        return res;
    }
};
