
// problem link => https://leetcode.com/problems/number-of-ways-to-paint-n-3-grid/?envType=daily-question&envId=2026-01-03

class Solution {
public:
    int numOfWays(int n) {
    int mod = 1000000007;
    long a = 6, b = 6;

    for (int i = 2; i <= n; i++) {
        long a2 = (2 * a + 2 * b) % mod;
        long b2 = (2 * a + 3 * b) % mod;
        a = a2;
        b = b2;
    }

    return (int)((b + a) % mod);
        
    }
};
