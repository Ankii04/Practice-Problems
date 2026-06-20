class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(char ch:s)
        {
            if(isalnum(ch))
            {
                t+=tolower(ch);
            }
        }

        string rev = t;
        reverse(rev.begin(),rev.end());
        if(rev==t)
        {
            return true;
        }
        return false;
    }
};