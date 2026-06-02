class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>m(nums.begin(),nums.end());
        nums.clear();
        for(auto x: m)
        {
            nums.push_back(x);
        }
        return nums.size();
    }
};