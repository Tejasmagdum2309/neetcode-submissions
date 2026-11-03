class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {

            unordered_set<int> container;

            for (int j = i + 1; j < n; j++) {

                int required = -(nums[i] + nums[j]);

                if (container.find(required) != container.end()) {
                    ans.push_back({nums[i], required, nums[j]});
                }

                container.insert(nums[j]);
            }
        }

        // remove duplicate triplets
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        return ans;
    }
};