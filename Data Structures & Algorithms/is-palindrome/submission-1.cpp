class Solution {
public:
    bool isPalindrome(string s) {
        string newStr = "";
        for(char ch : s)
        {
            if(isalnum(ch))
                newStr += tolower(ch);
        }
        int start = 0;
        int end = newStr.length() - 1;
        while(start <= end)
        {
            if(newStr[start] != newStr[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
};
