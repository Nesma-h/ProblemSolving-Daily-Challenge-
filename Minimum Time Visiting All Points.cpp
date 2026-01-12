class Solution {
    // problem link --> https://leetcode.com/problems/minimum-time-visiting-all-points/?envType=daily-question&envId=2026-01-12
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& p) {
        int sum=0; 
        for(int i=1; i<p.size(); i++){
            sum+=max(abs(p[i][0]-p[i-1][0]),abs(p[i][1]-p[i-1][1]));
        }
        return sum;
        
    }
};
