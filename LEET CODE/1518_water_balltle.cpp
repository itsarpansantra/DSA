/*
There are numBottles water bottles that are initially full of water. You can exchange numExchange empty water bottles from the market with one full water bottle.

The operation of drinking a full water bottle turns it into an empty bottle.

Given the two integers numBottles and numExchange, return the maximum number of water bottles you can drink.

Example 1:
Input: numBottles = 9, numExchange = 3
Output: 13
Explanation: You can exchange 3 empty bottles to get 1 full water bottle.
Number of water bottles you can drink: 9 + 3 + 1 = 13.

Example 2:
Input: numBottles = 15, numExchange = 4
Output: 19
Explanation: You can exchange 4 empty bottles to get 1 full water bottle. 
Number of water bottles you can drink: 15 + 3 + 1 = 19.
*/
# include<iostream>
# include<climits>
# include<vector>
# include<cmath>
using namespace std;

int total(int bottles, int exchange) {
    int sum = bottles; // total bottles drunk
    int empty = bottles; // all become empty after drinking

    while (empty >= exchange) {
        int newFull = empty / exchange;   // how many new full bottles we get
        sum += newFull;                   // drink them
        empty = newFull + (empty % exchange); // new empties + leftover empties
    }

    return sum;
}
/*
Dry Run (Example: bottles=15, exchange=4)

sum = 15, empty = 15

15 / 4 = 3 → sum = 18, empty = 3 + 3 = 6

6 / 4 = 1 → sum = 19, empty = 1 + 2 = 3

3 < 4 → stop

✅ return 19
*/

int main(){
    int bootle;
    cout<<"Enter bootle quantity: ";
    cin>>bootle;
    int exchange;
    cout<<"Enter max exchange:  ";
    cin>>exchange;
    cout<<total(bootle,exchange);
}