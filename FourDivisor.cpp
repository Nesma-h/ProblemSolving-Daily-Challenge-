// problem link --> https://leetcode.com/problems/four-divisors/description/?envType=daily-question&envId=2026-01-04

class Solution {
public:
    vector<long long int> Divisors(long long int n) {
        vector<long long int> divisors;
        for (long long int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divisors.push_back(i);
                if (i * i != n) {
                    divisors.push_back(n / i);
                }
            }
        }
        sort(divisors.begin(), divisors.end());
        return divisors;
    }

    int sumFourDivisors(vector<int>& a) {
        long long int sum=0; 
        for(long long int i=0; i<a.size(); i++ ){
            vector <long long int>d;
            d=Divisors(a[i]);
            if(d.size()==4){
                sum+=d[0]+d[1]+d[2]+d[3];
            }
        }
        return sum;

    }
};
