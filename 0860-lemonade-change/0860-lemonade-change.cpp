class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int ten = 0 , five = 0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            {
                five = five+1;
            }
            else if(bills[i]==10)
            {   
                    if(five)
                    {
                    ten++;
                    five--;
                    }
                    else
                    {
                        return false;
                    }
            }
            else
            {
                    if(five && ten)
                    {
                        ten--;
                        five--;
                    }
                    else if(five>=3)
                    {
                        five = five - 3;
                    }
                    else
                    {
                    return false;
                    }
            }
            
        }
    return true;
    }
};