class Solution {
public:
// problem link -> https://leetcode.com/problems/minimum-ascii-delete-sum-for-two-strings/?envType=daily-question&envId=2026-01-10
    int lcs(string& s1, string& s2) {
        int m = s1.length(), n = s2.length();
        vector<vector<int>> t(m + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (s1[i - 1] == s2[j - 1]) {
                    t[i][j] = s1[i - 1] + t[i - 1][j - 1];
                } else
                    t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
        return t[m][n];
    }
    int minimumDeleteSum(string s1, string s2) {
        int tot = 0;
        for(auto ch : s1) tot += ch;
        for(auto ch : s2) tot += ch;

        return tot - 2 * lcs(s1, s2);
    }
};
