class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
                if(matrix.size()==0)return false;
        int n=matrix.size();
        int m=matrix[0].size();
        int lo=0;
        int hi=m-1;
        while(lo<n&&hi>=0){
            
            if(matrix[lo][hi]==target){
                return true;
            }
               if(matrix[lo][hi]<target){
                lo++;
               }
               else{
                hi--;
               }
        }
        return false;
    }
};