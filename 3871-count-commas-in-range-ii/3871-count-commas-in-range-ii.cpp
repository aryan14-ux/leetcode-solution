class Solution {
public:
    long long solve(long long n, long long x) {
        if (x > n)
            return 0;

        return n - x + 1 + solve(n, x * 1000);
    }

    long long countCommas(long long n) {
        return solve(n, 1000);
    }
};
