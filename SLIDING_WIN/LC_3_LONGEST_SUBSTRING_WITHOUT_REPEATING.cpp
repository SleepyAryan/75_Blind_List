// Given a string s, find the length of the longest substring without repeating characters.
class Solution {
public:
int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
            return 0;
        int mx=INT_MIN;//maximun variable to store the length of the longest subsstring containing all unique characters
        int i=0,j=0;
        unordered_map<char,int> m;//hash map to store the count of characters present in the string.
        while(j<s.length())
        {
            m[s[j]]++;
            if(m.size()==j-i+1)//if the size of the map is equal to the window size(j-i+1) it means that count of each character present in the map is one or all the characters are unique.
                mx=max(mx,j-i+1);
            else if(m.size()<j-i+1)//if the size of the map is less than the size of the window, it means it contains duplicate elements
            {
                while(m.size()<j-i+1)//we remove the duplicates from the map as well as we all decrease the size of the sliding window.
                {
                    m[s[i]]--;
                    if(m[s[i]]==0)
                        m.erase(s[i]);
                    i++;
                }
            }
            j++;
        }
        return mx;
    }
    // TC:O(N)
    // OC:O(N)