class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>answer;
        vector<int>temp;
        temp=intervals[0];
        for(auto val:intervals){
            if(temp[1]>=val[0]){
                temp[1]=max(temp[1],val[1]);
            }
            else{
                answer.push_back(temp);
                temp=val;
            }
        }
        answer.push_back(temp);
        return answer;
    }
};

//This problem is same as that of the LC_56_MERGE_INTERVAL..The only ddifference here is we have to insert the given innput and do the same thing

// TC: O(N)
// SC: O(1)