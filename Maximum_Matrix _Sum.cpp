// problem link --> https://leetcode.com/problems/maximum-matrix-sum/description/?envType=daily-question&envId=2026-01-05
class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long int sum=0;
        int neg=0,mn=100000;
        for(int i=0; i<matrix[0].size(); i++){
             for(int j=0; j<matrix.size(); j++){
                sum+=abs(matrix[i][j]);
                mn=min(mn,abs(matrix[i][j]));
                if(matrix[i][j]<0){
                    neg++;
                }
             }
        }
        if(neg & 1){
            sum-=2*mn;
        }

        return sum;
        
    }
};
