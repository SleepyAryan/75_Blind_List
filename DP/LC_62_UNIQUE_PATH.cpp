class Solution {
public:
    int helper(int m,int n,int cur_x,int cur_y,unordered_map<string,int>&mp){
        if(cur_x==m-1 && cur_y==n-1){
            return 1;
        }
        string cur_loc=to_string(cur_x)+to_string(cur_y);
        if(mp.find(cur_loc)!=mp.end()){
            return mp[cur_loc];
        }
        int right=0;
        int down=0;
        if(cur_x<m){
        right=helper(m,n,cur_x+1,cur_y,mp);
        }
        if(cur_y<n){
        down=helper(m,n,cur_x,cur_y+1,mp);
        }
        return mp[cur_loc]=right+down;
    }
    int uniquePaths(int m, int n) {
     unordered_map<string,int>mp;
     return helper(m,n,0,0,mp);   
    }
};

// TC:
// OC: