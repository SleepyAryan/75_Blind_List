class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        vector<int>temp=intervals[0];
        for(auto interval:intervals){
            if(temp[1]>interval[0]){
                temp[1]=max(temp[1],interval[1]);
            }
            else{
             temp=interval;
             ans.push_back(temp);
            }
        }
            ans.push_back(temp);
        return ans;
    }
};

// TC: O(N)
// SC: O(1)