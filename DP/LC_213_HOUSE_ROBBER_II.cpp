class Solution {
public:
     int dp1[100001];
     int dp2[100001];
    int profit(vector<int>& nums,int current,int n,int dp[100001])
    {
        if(current>=n)
        {
            return 0;
        }
        if(dp[current]!=-1)
        {
            return dp[current];
        }
        int consider=nums[current]+profit(nums,current+2,n,dp);
        int notConsider=profit(nums,current+1,n,dp);
        dp[current]=max(consider,notConsider);
        return dp[current];
    }
    int rob(vector<int>& nums) {
         // memset(dp,-1,sizeof(dp));
        if(nums.size()==1)
        {
            return nums[0];
        }
        memset(dp1,-1,sizeof(dp1));
        memset(dp2,-1,sizeof(dp2));
        int a=profit(nums,0,nums.size()-1,dp1);
        int b=profit(nums,1,nums.size(),dp2);
        return max(a,b);
    }
};

// TC: O(2^N)
// SC: 0(1)