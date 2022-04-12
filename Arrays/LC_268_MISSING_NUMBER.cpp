=class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int n=nums.size();
     int fSum=(n*(n+1))/2;
     int sum=0;
     for(auto num:nums)
     {
         sum+=num;
     }
    return fSum-sum;
    }
};

TC: O(N)
SC: O(N)