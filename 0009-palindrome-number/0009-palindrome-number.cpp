class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        long long revnum = 0;
        int n = x;
        while(n>0)
        {
            int a = n%10;
            revnum = revnum * 10 + a;
            n=n/10; 
        }

        if(revnum==x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};