class Solution {
public:
  void solve(vector<char>& s,int i){
      int n= s.size();
         if(i>=n/2){
        return ;
         }
        swap(s[i],s[n-i-1]);
        solve(s,i+1);
  }
    void reverseString(vector<char>& s) {
        solve(s,0);
       
        
    }
};