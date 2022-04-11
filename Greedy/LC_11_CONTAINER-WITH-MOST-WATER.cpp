class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int lh;
        int rh;
        int l=0;
        int r=n-1;
        int area=INT_MIN;
        while(r>l){
            lh=height[l];
            rh=height[r];
            int minH=min(lh,rh);
            area=max(area,(r-l)*minH);
            if(rh>lh)l++;
            else{
                r--;
            }
        }
    return area;    
    }
                          
};
TC: O(N)
SC: O(1)