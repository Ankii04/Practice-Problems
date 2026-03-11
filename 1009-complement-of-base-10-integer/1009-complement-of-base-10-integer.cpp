class Solution {
public:
    int bitwiseComplement(int n) {
        int cnt =0;
        int result = 0;
        if(n<=0)
        {
            return 1;
        }
        while(n)
        {
            int r = n%2;
            result +=pow(2,cnt) * !r;
            n/=2;
            cnt++;
        }
        return result;
    }
};