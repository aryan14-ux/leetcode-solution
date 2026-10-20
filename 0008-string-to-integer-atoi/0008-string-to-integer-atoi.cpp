class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n=s.size();
        while(i<n&&s[i]==' '){
            i++;
        }
        int sign=1;
        if(i<n&&s[i]=='-'){
            sign =-1;
            i++;
        } 
        else if(i<n&&s[i]=='+'){
            sign=1;
            i++;
        }
        long long num=0;
        while(i<n&&s[i]>='0'&&s[i]<='9'){
            int digit=s[i]-'0';

            if(num>INT_MAX/10||(num==INT_MAX/10&&digit>INT_MAX%10)){
                return sign==1?INT_MAX:INT_MIN;
            }
            num=num*10+digit;
            i++;
        }
        return num*sign;
    }
};