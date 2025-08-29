/*The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

countAndSay(1) = "1"
countAndSay(n) is the run-length encoding of countAndSay(n - 1).
Run-length encoding (RLE) is a string compression method that works by replacing consecutive identical characters (repeated 2 or more times) with the concatenation of the character and the number marking the count of the characters (length of the run). For example, to compress the string "3322251" we replace "33" with "23", replace "222" with "32", replace "5" with "15" and replace "1" with "11". Thus the compressed string becomes "23321511".

Given a positive integer n, return the nth element of the count-and-say sequence.

 

Example 1:

Input: n = 4

Output: "1211"

Explanation:

countAndSay(1) = "1"
countAndSay(2) = RLE of "1" = "11"
countAndSay(3) = RLE of "11" = "21"
countAndSay(4) = RLE of "21" = "1211"
*/
# include<iostream>
# include<string>
using namespace std;
class Solution {
    public:
        string countAndSay(int n) { // n no of length
             if(n==1) return "1"; // jodi n==1 r value 1 hoy to string "1" 
            string str= countAndSay(n-1); // recursion
            char ch = str[0]; // string r first element
            int freq = 1; // ata cout er janno . 1 rekhachi karon akta element acha 
            string ans = ""; // new string akhana puch back korbo
            for(int i=1;i<str.length();i++){ // string second element thaka last obdi
                char dh = str[i];// string i th element 
                if(ch==dh){ // jodi duto charecter ak hoy to count barba
                    freq++;
                }
                else{
                    ans += (to_string(freq)+ch); // akhana push back hoba . akhana nabo first frequency te kato gulo element + oi charecter ta kato halo 
                    
                    freq=1; // ami anno element pala count again 1 korbo
                    ch=dh; // ch r tao change korbo
                }
            }
            ans += (to_string(freq)+ch); // last roa gala add kore dabo laste 
            return ans ; // last string ta retun korbo 
        }
    };