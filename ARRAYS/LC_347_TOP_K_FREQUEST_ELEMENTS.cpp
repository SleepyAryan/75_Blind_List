class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        //Creating map of array elements with their count
        unordered_map<int, int> mp;
        for(auto x: nums)
            mp[x]++;
        
        // Since we need top frequent numbers which basically means they should be in the heap, 
        // so less frequent numbers should be at top because they'll be popped first if heap size goes greater than k. 
        // so basically top to bottom "numbers (freqeuncy count)" should increase, hence minHeap will be used.
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minH;
        vector<int> v;
        
        //Traversing through map and pushing it in heap
        for(auto x: mp){
            minH.push(make_pair(x.second, x.first)); // Making pair of count and the number
            if(minH.size() > k) //Popping if heap size goes above k
                minH.pop();
        }
        
        //Pushing the heap elements in vector
        while(minH.size() > 0){
            v.push_back(minH.top().second);
            minH.pop();
        }
        
        return v;
    }
};

TC: O(Nlogk)
SC: O(N)