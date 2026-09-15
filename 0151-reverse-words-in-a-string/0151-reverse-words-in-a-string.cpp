class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int i = 0;
        while (i < s.size()) {
            while (i < s.size() && s[i] ==' ')
                i++;
            int start = i;
            while (i < s.size() && s[i] !=' ')
                i++;
            reverse(s.begin() + start, s.begin() + i);
        }
        int j = 0;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] != ' ') {
                s[j++] = s[i];
            } else if (j > 0 && s[j - 1] != ' ') {
                s[j++] = ' ';
            }
        }

        if (j > 0 && s[j - 1] == ' ')
            j--;

        s.resize(j);

        return s;
    }
};