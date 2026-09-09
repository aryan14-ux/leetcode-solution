class Solution {
public:
    long long countCommas(long long n) {
        long long count = 0;
        long long x = 1000;

        while (x <= n) {
            count += n - x + 1;
            x *= 1000;
        }

        return count;
    }
};