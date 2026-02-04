/*
You have a browser of one tab where you start on the homepage and you can visit another url, get back in the history number of steps or move forward in the history number of steps.

Implement the BrowserHistory class:

BrowserHistory(string homepage) Initializes the object with the homepage of the browser.
void visit(string url) Visits url from the current page. It clears up all the forward history.
string back(int steps) Move steps back in history. If you can only return x steps in the history and steps > x, you will return only x steps. Return the current url after moving back in history at most steps.
string forward(int steps) Move steps forward in history. If you can only forward x steps in the history and steps > x, you will forward only x steps. Return the current url after forwarding in history at most steps.
 

Example:

Input:
["BrowserHistory","visit","visit","visit","back","back","forward","visit","forward","back","back"]
[["leetcode.com"],["google.com"],["facebook.com"],["youtube.com"],[1],[1],[1],["linkedin.com"],[2],[2],[7]]
Output:
[null,null,null,null,"facebook.com","google.com","facebook.com",null,"linkedin.com","google.com","leetcode.com"]

Explanation:
BrowserHistory browserHistory = new BrowserHistory("leetcode.com");
browserHistory.visit("google.com");       // You are in "leetcode.com". Visit "google.com"
browserHistory.visit("facebook.com");     // You are in "google.com". Visit "facebook.com"
browserHistory.visit("youtube.com");      // You are in "facebook.com". Visit "youtube.com"
browserHistory.back(1);                   // You are in "youtube.com", move back to "facebook.com" return "facebook.com"
browserHistory.back(1);                   // You are in "facebook.com", move back to "google.com" return "google.com"
browserHistory.forward(1);                // You are in "google.com", move forward to "facebook.com" return "facebook.com"
browserHistory.visit("linkedin.com");     // You are in "facebook.com". Visit "linkedin.com"
browserHistory.forward(2);                // You are in "linkedin.com", you cannot move forward any steps.
browserHistory.back(2);                   // You are in "linkedin.com", move back two steps to "facebook.com" then to "google.com". return "google.com"
browserHistory.back(7);                   // You are in "google.com", you can move back only one step to "leetcode.com". return "leetcode.com"
*/
# include<iostream>
# include<vector>
using namespace std;
class browserHistory{
private:
    vector<string>history;
    int curr;
public:
    // constructor
    browserHistory(string homepage){
        history.push_back(homepage); // what can see insert in vector
        curr=0;
    }
    void visit(string url){
        history.erase(history.begin()+curr+1,history.end()); // when you enter new website only this website in your history , other history was deleted
        history.push_back(url); // only url other history are deleted
        curr++; 
    }
    string back(int steps){ // you come last one what you see , if steps greter than 0 so you return last one visited
        curr = max(0,curr-steps);
        return history[curr];
    }
    string forward(int steps){
        curr = min((int)history.size()-1,steps+curr); // move lasst one in vector then return
        return history[curr];
    }
};

int main(){
    browserHistory bh("leetcode.com");
    bh.visit("google.com");
    bh.visit("facebook.com");     // You are in "google.com". Visit "facebook.com"
    bh.visit("youtube.com");      // You are in "facebook.com". Visit "youtube.com"
    bh.back(1);                   // You are in "youtube.com", move back to "facebook.com" return "facebook.com"
    bh.back(1);                   // You are in "facebook.com", move back to "google.com" return "google.com"
    bh.forward(1);                // You are in "google.com", move forward to "facebook.com" return "facebook.com"
    bh.visit("linkedin.com");     // You are in "facebook.com". Visit "linkedin.com"
    cout<<bh.forward(2);                // You are in "linkedin.com", you cannot move forward any steps.
    bh.back(2);                   // You are in "linkedin.com", move back two steps to "facebook.com" then to "google.com". return "google.com"
    cout<<bh.back(7);  
}