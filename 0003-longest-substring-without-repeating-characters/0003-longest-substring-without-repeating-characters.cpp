class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_set<char>set;
      long long curSum = 0 , maxSum = 0;
      int left = 0;
      for(int right=0;right<s.size();right++)
      {
        while(set.count(s[right]))
        {
            set.erase(s[left]);
            curSum--;
            left++;
        }

        set.insert(s[right]);
        curSum++;
        maxSum = max(curSum,maxSum);
      }
      return maxSum;
    }
};
