class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> temp = nums;
        sort(nums.begin(), nums.end());
        int left = 0, right = n - 1;
        int a = -1, b = -1;
        while(left < right) {
            int sum = nums[left] + nums[right];
            if(sum == target) {
                a = nums[left];
                b = nums[right];
                break;
            }
            if(sum < target) left++;
            else right--;
        }
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            if(temp[i] == a) {
                ans.push_back(i);
                break;
            }
        }
        for(int i = 0; i < n; i++) {
            if(temp[i] == b && i != ans[0]) {
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};
