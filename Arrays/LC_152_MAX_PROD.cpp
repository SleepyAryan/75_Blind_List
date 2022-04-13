class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int leftProd=1;
        int rightProd=1;
        int n=nums.size();
        int maxProd=INT_MIN;
        for(int i=0;i<nums.size();i++){
            leftProd*=nums[i];
            rightProd*=nums[n-i-1];
            maxProd=max(maxProd,max(leftProd,rightProd));
            if(leftProd==0){
                leftProd=1;
            }
            if(rightProd==0){
                rightProd=1;
            }
        }
        return maxProd;
    }
};

// TC: O(N)
// SC: O(1)