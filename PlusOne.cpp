// problem link -->  https://leetcode.com/problems/plus-one/description/?envType=daily-question&envId=2026-01-01
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        if (digits[i] == 9) {
            while ( i>=0 && digits[i] == 9) {
                digits[i] = 0;
                i--;
            }if(i>=0){
            digits[i] ++;
            }else{       
            digits.push_back(0);
            digits[0]=1;
            }
        }else{
            digits[i]++;
        }

        return digits;
    }
};
