class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string>mp;
        int code = pow(2,k);
        for(int i=k;i<=s.size();i++)
        {
            string sub = s.substr(i-k,k);
            if((!mp.count(sub)))
            {
                mp.insert(sub);
                code--;
            }
            if(code==0)
            {
                return true;
            }
            
        }
        return false;
    }
};