class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> SuffixMin(n);
        SuffixMin[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            SuffixMin[i] = min(nums[i], SuffixMin[i + 1]);
        }
        int mx = nums[0];
        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
      

        if (mx - SuffixMin[i] <= k) {
            return i;
        }
    }
    return -1;
}
};
