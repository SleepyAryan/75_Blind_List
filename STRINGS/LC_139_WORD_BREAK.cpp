class Solution {
public:
    unordered_map<string,bool>mp;
    bool wordBreak(string s, vector<string>& wordDict) {
        if(find(wordDict.begin(),wordDict.end(),s)!=wordDict.end())
        {
            return true;
        }
        if(mp.find(s)!=mp.end())
        {
            return mp[s];
        }
        for(int i=0;i<s.size();i++)
        {
            string temp=s.substr(0,i);
            if(find(wordDict.begin(),wordDict.end(),temp)!=wordDict.end() && wordBreak(s.substr(i),wordDict))
            {
                return mp[s]=true;
            }
        }
        return mp[s]=false;
    }
};

// TC: O(N)
// SC: O(1)