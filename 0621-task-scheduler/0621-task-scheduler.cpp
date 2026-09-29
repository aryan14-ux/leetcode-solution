class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26, 0);

        for (char c : tasks)
            freq[c - 'A']++;

        sort(freq.rbegin(), freq.rend());

        int maxFreq = freq[0];

        int ans = (maxFreq - 1) * (n + 1);

        for (int f : freq) {
            if (f == maxFreq)
                ans++;
        }

        return max((int)tasks.size(), ans);
    }
};