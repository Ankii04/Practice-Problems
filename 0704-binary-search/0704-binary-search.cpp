class Solution {
public:
    int search(vector<int>& nums, int target) {
       auto lb = lower_bound(nums.begin(),nums.end(),target);
       if(lb==nums.end() || *lb!=target)return -1;
       return lb - nums.begin();
    }
};