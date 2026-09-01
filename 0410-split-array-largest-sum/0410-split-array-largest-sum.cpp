class Solution {
public:

    bool isPossible(vector<int>& nums, int k, long long maxsum) {
        int subarray = 1;
        long long sum = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (sum + nums[i] <= maxsum) {
               sum += nums[i];
            }
            else {
                subarray++;
               sum = nums[i];

                if (subarray > k)
                    return false;
            }
        }

        return true;
    }

int splitArray(vector<int>& nums, int k) {
         int n = nums.size();

        if (k > n)
            return -1;

        long long low = *max_element(nums.begin(), nums.end());

        long long high = 0;
        for (int x : nums)
            high += x;

        long long ans = high;

        while (low <= high) {

            long long mid = low + (high - low) / 2;

            if (isPossible(nums, k, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return (int)ans;
    }
};