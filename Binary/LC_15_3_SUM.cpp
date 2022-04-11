class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        	sort(nums.begin(), nums.end());

	vector<vector<int>> vect;

	int n = nums.size(), low, high, sum, target;

	set<vector<int>> ms;

	for(int i = 0;i < n-2; i++)
	{
		low = i+1;
		high = n-1;
		target = -nums[i];

		while(low < high)
		{
			sum = nums[low] + nums[high];

			if(sum == target)
			{
				ms.insert({ nums[low], nums[high], nums[i] });

				++low;
				--high;                    
			}

			else if(sum > target)
				--high;          

			else
				++low;
		}
	}

	for(auto &it : ms)
		vect.push_back(it);

	return vect;
}
    
};

// TC: O(N)
// SC: O(1)