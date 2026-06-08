class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;

        while(start <= end)
        {
            while(!isalnum(s[start]))
                start++;

            while(!isalnum(s[end]))
                end--;

            if(end >= start && tolower(s[start]) != tolower(s[end]))
                return false;
            start++;
            end--;
        }

        return true;
    }
};
