/*
There is a malfunctioning keyboard where some letter keys do not work. All other keys on the keyboard work properly.

Given a string text of words separated by a single space (no leading or trailing spaces) and a string brokenLetters of all distinct letter keys that are broken, return the number of words in text you can fully type using this keyboard.

 

Example 1:

Input: text = "hello world", brokenLetters = "ad"
Output: 1
Explanation: We cannot type "world" because the 'd' key is broken.
Example 2:

Input: text = "leet code", brokenLetters = "lt"
Output: 1
Explanation: We cannot type "leet" because the 'l' and 't' keys are broken.
Example 3:

Input: text = "leet code", brokenLetters = "e"
Output: 0
Explanation: We cannot type either word because the 'e' key is broken.
*/
# include<iostream>
#include <sstream>
using namespace std;
int word(string str,string s){
    string word;
    stringstream ss(str);
    //ss >> word1 >> word2; 
    int m = s.size();
    int count =0;
    while (ss >> word) { // get one word at a time
        bool found = false;

        // check if word contains any char from s
        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < word.size(); j++) {
                if (s[i] == word[j]) {
                    found = true;
                    break;  // no need to check more
                }
            }
            if (found) break;
        }

        if (!found) count++;  // only count if no match
    }
    return count;
}

// another approach // do this . because TC is very high . upper processes
// bool broken[26] = {false};

//     // mark broken letters
//     for (char c : brokenLetters) {
//         broken[c - 'a'] = true;
//     }

//     string word;
//     stringstream ss(text);
//     int count = 0;

//     while (ss >> word) {
//         bool canType = true;
//         for (char c : word) {
//             if (broken[c - 'a']) {
//                 canType = false;
//                 break;
//             }
//         }
//         if (canType) count++;
//     }
int main(){
    string str="lhello world";
    string s ="ad";
    cout<<word(str,s);
}