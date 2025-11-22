class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>>anss;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++)
        {   if(i > 0 && arr[i] == arr[i - 1]) continue;
            int ans = 0 - arr[i];
            int start = i+1 , end = n-1;
            while(start<end)
            {
                if(arr[start] + arr[end]==ans)
                {
                    vector<int>a = {arr[i],arr[start],arr[end]};
                    anss.push_back(a);
                    start++;
                    end--;
                }
                else if(arr[start]+arr[end]>ans)
                {
                    end--;
                }
                else
                {
                    start++;
                }
            }
        }
        sort(anss.begin(),anss.end());
        anss.erase(unique(anss.begin(),anss.end()),anss.end());
        return anss;
    }
};