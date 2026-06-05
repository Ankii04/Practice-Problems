class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count=0;
        int less=0;
        for(int i=num1;i<=num2;i++)
        {
            string a = to_string(i);
            for(int i=1;i<a.size()-1;i++)
            {
                if(a[i]>a[i-1] && a[i]>a[i+1])
                {
                    count++;
                }
                else if(a[i]<a[i-1] && a[i]<a[i+1])
                {
                    less++;
                }
            }
        }
        return count+less;
    }
};