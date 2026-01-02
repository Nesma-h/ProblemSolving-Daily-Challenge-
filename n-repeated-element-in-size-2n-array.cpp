// problem link --> https://leetcode.com/problems/n-repeated-element-in-size-2n-array/?envType=daily-question&envId=2026-01-02

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int>mp;
        int x=0;
        for(int i=0; i<nums.size(); i++){
            if( mp[nums[i]]++ != 0 ){
                x=nums[i];
                break;
            }
        }
        return x;
    }
};
