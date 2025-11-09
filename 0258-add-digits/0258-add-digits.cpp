class Solution {
public:
    int addDigits(int num) {
        while(num>9)
        {
        int rev,ans=0;
        while(num!=0)
        {
            rev=num%10;
            num/=10;
            ans+=rev;
        }
        num=ans;
        }
        return num;
    }
};