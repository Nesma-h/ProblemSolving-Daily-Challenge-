class Solution {
public:
// problem link --> https://leetcode.com/problems/max-dot-product-of-two-subsequences/description/?envType=daily-question&envId=2026-01-08
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        
        vector<vector<int>> dp(nums1.size(), vector<int>(nums2.size(), INT_MIN));

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                int prod = nums1[i] * nums2[j];

                if (i > 0 && j > 0)
                    dp[i][j] = max(dp[i][j], dp[i-1][j-1] + prod);

                dp[i][j] = max(dp[i][j], prod);

                if (i > 0)
                    dp[i][j] = max(dp[i][j], dp[i-1][j]);

                if (j > 0)
                    dp[i][j] = max(dp[i][j], dp[i][j-1]);
            }
        }
        return dp[nums1.size()-1][nums2.size()-1];
        
    }
};
