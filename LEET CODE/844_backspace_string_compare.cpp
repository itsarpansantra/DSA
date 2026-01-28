/*
Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

 

Example 1:

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
Example 2:

Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".
Example 3:

Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".

*/
# include<iostream>
# include<stack>
using namespace std;
bool check(string s , string t){
    int i = s.size() - 1, j = t.size() - 1;

    while (i >= 0 || j >= 0) {
        int skipS = 0, skipT = 0;

        // Process backspaces in s
        while (i >= 0) {
            if (s[i] == '#') {
                skipS++;
                i--;
            }
            else if (skipS > 0) {
                skipS--;
                i--;
            }
            else break;
        }

        // Process backspaces in t
        while (j >= 0) {
            if (t[j] == '#') {
                skipT++;
                j--;
            }
            else if (skipT > 0) {
                skipT--;
                j--;
            }
            else break;
        }

        char c1, c2;

        if (i >= 0) c1 = s[i];
        else c1 = '\0';

        if (j >= 0) c2 = t[j];
        else c2 = '\0';

        if (c1 != c2) return false;

        i--;
        j--;
    }

    return true;
}
int main(){
    string s = "ab##";
    string t = "c#d#";
    cout<<check(s,t);
}