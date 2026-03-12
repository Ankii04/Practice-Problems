class Solution {
public:
    string minWindow(string s, string t) {
        int n = t.size();
        int si = s.size();
        unordered_map<char,int>mp;

        //store krliya
        for(char &ch: t)
        {
            mp[ch]++;
        }

        int reqcount = n;
        int i= 0, j=0;
        int windowsize = INT_MAX;
        int sindex = 0;
        while(j<si)
        {
            char ch = s[j];
            if(mp[ch]>0)
            {
                reqcount--;
            }
            mp[ch]--;
            while(reqcount==0)
            {
                int currsize = j-i+1;
                if(windowsize>currsize)
                {
                    windowsize = currsize;
                    sindex = i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0)
                {
                    reqcount++;
                }
                i++;
            }
            j++;
        }
        return windowsize==INT_MAX?"":s.substr(sindex,windowsize);
    }
};