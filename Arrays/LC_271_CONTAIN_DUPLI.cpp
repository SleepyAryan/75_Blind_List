class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
       for(auto num:nums){
           mp[num]++;
       }
        for(auto num:nums){
            if(mp[num]>1){
                return true;
            }
        }
        return false;
    }
};

// TC: O(N)
// SC: O(1)