class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int n = s.size();
        int l=0,r=0,len = 0;
        for(int i=r;i<n;i++)
        {
            if(mp.count(s[i]))
            {
                l = max(l,mp[s[i]]+1);
            }

            mp[s[i]] = i;
            len = max(len,i-l+1);
        }
        return len;
    }
};