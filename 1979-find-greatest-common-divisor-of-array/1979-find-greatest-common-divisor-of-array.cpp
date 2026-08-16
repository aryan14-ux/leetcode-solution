class Solution {
public:
    int findGCD(vector<int>& nums) {
 int num1=*min_element(nums.begin(),nums.end());
  int num2=*max_element(nums.begin(),nums.end());
        for(int i=min(num1,num2);i>=1;i--){
            if(num1%i==0&&num2%i==0){
            return i;
            break;
        }
    }
    return 1;
  }
};