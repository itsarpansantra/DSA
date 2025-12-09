/*
Given two binary strings a and b, return their sum as a binary string.

 

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
*/
# include<iostream>
# include<algorithm>
using namespace std;
int main(){
    string str = "110";
    int n = str.size();
    int a = 0;
    int x =1;
    for(int i=n-1;i>=0;i--){
        char ch = str[i];
        int num = ch -'0';
        a+=num*x;
        x*=2;
    }
    cout<<a<<endl;
    string s = "010";
    int m = s.size();
    int b = 0;
    int y =1;
    for(int i=m-1;i>=0;i--){
        char ch = s[i];
        int num = ch -'0';
        b+=num*y;
        y*=2;
    }
    cout<<b<<endl;
    int sum = a+b;
    cout<<sum<<endl;
    string p ="";
    while(sum>=1){
        int z = sum%2;
        p+=to_string(z);
        sum/=2;
    }
    reverse(p.begin(),p.end());
    cout<<p;
}

// efficient solution
/*
string result = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            
            result.push_back((sum % 2) + '0');
            carry = sum / 2;
        }

        reverse(result.begin(), result.end());
        return result;
*/