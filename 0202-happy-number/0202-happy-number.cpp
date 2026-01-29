class Solution {
public:
    int square(int n)
    {   int ans=0;
        while(n>0)
        {
            int t =n%10;
            ans+=t*t;
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        int slow = square(n);
        int fast = square(square(n));
        while(slow!=fast)
        {
            slow = square(slow);
            fast = square(square(fast));
            if(slow==1 || fast==1)
            {
                return true;
            }
        }
        return slow==1;
    }
};