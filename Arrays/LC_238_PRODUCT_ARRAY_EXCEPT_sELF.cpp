class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n);
        left[0]=1;
        vector<int> right(n);
        right[nums.size()-1]=1;
        vector<int> answer(n);
        for(int i=1;i<nums.size();i++)
        {
            left[i]=left[i-1]*nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--)
        {
            right[i]=right[i+1]*nums[i+1];
        }
        for(int i=0;i<nums.size();i++)
        {
            answer[i]=right[i]*left[i];
        }
        return answer;
    }
};

// TC:O(N)
// SC: 0(2N)~O(N)