class Solution {
public:
int longestConsecutive(vector<int>& a) {
        if(a.empty()) return 0;
        unordered_set<int> m;
        int maxLen = 0;
        //1. Insert all elements into the hashset.
        for(int num:a){ 
            m.insert(num);
        }
        
        //2. Search in array a, whether a[i]-1 exists in the hashset
        for(int num:a){
            
            if(m.find(num-1) == m.end()){
                int curNum = num;
                int count = 1;
				
				//Part A - Refer Time Complexity
                while(m.find(curNum+1) != m.end()){ 
                    curNum+=1;
                    count+=1;
                }
                maxLen = max(count, maxLen);
            }
        }
        return maxLen;
    }
};

TC: O(N^2)
SC: O(1)
