class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
   sort(nums.begin(),nums.end());
   int multiple =k;
           while(binary_search(nums.begin(),nums.end(),multiple)){
            multiple+=k;
            

            }
            return multiple;
       
    }
};