
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> curr;

    void solve(vector<int>& nums, int i) {
        if (i == nums.size()) {
            ans.push_back(curr);
            return;
        }


        curr.push_back(nums[i]);
        solve(nums, i + 1);

  
        curr.pop_back();

        
        solve(nums, i + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums, 0);
        return ans;
    }
};
