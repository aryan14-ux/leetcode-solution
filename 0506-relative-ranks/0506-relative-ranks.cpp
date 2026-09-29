class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();

        vector<pair<int, int>> athletes;

        for (int i = 0; i < n; i++) {
            athletes.push_back({score[i], i});
        }

        sort(athletes.rbegin(), athletes.rend());

        vector<string> ans(n);

        for (int i = 0; i < n; i++) {
            int index = athletes[i].second;

            if (i == 0)
                ans[index] = "Gold Medal";
            else if (i == 1)
                ans[index] = "Silver Medal";
            else if (i == 2)
                ans[index] = "Bronze Medal";
            else
                ans[index] = to_string(i + 1);
        }

        return ans;
    }
};