class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int i = 0;

        for (int x = nums[0]; x <= nums[n - 1]; x++) {
            if (i < n && nums[i] == x)
                i++;
            else
                ans.push_back(x);
        }

        return ans;
    }
};