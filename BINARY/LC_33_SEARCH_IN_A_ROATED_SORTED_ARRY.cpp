class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0,h = n-1;
        // First find the index of lowest element
        while(l<h){
            int m = l + (h-l)/2;
            if(nums[m]>nums[h]) l = m+1;
            else h = m; 
        }
        int r = l; // store it in r
        
		if(target==nums[r]) return r;
		else if(r==0) l=0,h=n-1; // In this case the whole array is sorted ..as our lowest element is at first index..that's why we'll search in our whole array .. 0 ... n-1
		else if(target>=nums[0]) l=0,h = r;  // If our target is greater than our first element , then target will present in array before our lowest element ,so range is 0 ..... r 
		else if(target<nums[0]) l = r+1,h=n-1; // if our target is less than our first element, then target will be after our lowest element , r ..... n-1
        
        //Simple Binary Search
        while(l<=h){
            int m = l + (h-l)/2;
            if(nums[m]==target) return m;
            if(nums[m]>target) h = m -1;
            else l = m+1;
        }
        return -1;
    }
};

// TC: 0(N)
// SC: 0(1)