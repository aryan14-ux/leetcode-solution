class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
   int mn=0;
   int mx=0;
   for(int i=1;i<n;i++){
    if(nums[i]<nums[mn])mn=i;
     if(nums[i]>nums[mx])mx=i;
   }
        int l=min(mn,mx);
        int r=max(mn,mx);
        return min({r+1,n-l,l+1+n-r});
    }
};