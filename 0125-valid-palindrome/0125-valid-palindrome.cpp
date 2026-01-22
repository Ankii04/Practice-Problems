class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(auto b: s)
        {   if(isalnum(b))
            {
            a+=tolower(b);
            }
        }
        string b =a;
        reverse(a.begin(),a.end());
        return a==b;
    }
};
