class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> missing;
        for(int i = 0; i < nums.size() - 1; i++) {
            int curr = nums[i];
            int next = nums[i + 1];
            for(int num = curr + 1; num < next; num++) {
                missing.push_back(num);
            }
        }
        return missing;
    }
};
