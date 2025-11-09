class Solution {
public:
    bool isPalindrome(int x) {
        int num =x;
        if(x<0)
        {
            return false;
        }
        int rev=0,rem;
        while(x!=0)
        {
            rem=x%10;
            x/=10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10)
            {
                return false;
            }
            rev = rev*10 + rem;
        }
        if(num==rev)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};