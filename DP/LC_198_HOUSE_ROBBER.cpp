class Solution {
public:
    int helper(vector<int>& nums,int current,unordered_map<int,int>& mp){
        if(current>=nums.size()){
            return 0;
        }
        if(mp.find(current)!=mp.end()){
            return mp[current];
        }
        int choose = nums[current]+helper(nums,current+2,mp);
        int notChoose = helper(nums,current+1,mp);
        return mp[current]=max(choose,notChoose);
    }
    int rob(vector<int>& nums) {
        unordered_map<int,int>mp;
        return helper(nums,0,mp);
    }
};

// TC: O(2*N)
// SC: O(1)