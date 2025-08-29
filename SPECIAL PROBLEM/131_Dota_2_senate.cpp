/*
In the world of Dota2, there are two parties: the Radiant and the Dire.

The Dota2 senate consists of senators coming from two parties. Now the Senate wants to decide on a change in the Dota2 game. The voting for this change is a round-based procedure. In each round, each senator can exercise one of the two rights:

Ban one senator's right: A senator can make another senator lose all his rights in this and all the following rounds.
Announce the victory: If this senator found the senators who still have rights to vote are all from the same party, he can announce the victory and decide on the change in the game.
Given a string senate representing each senator's party belonging. The character 'R' and 'D' represent the Radiant party and the Dire party. Then if there are n senators, the size of the given string will be n.

The round-based procedure starts from the first senator to the last senator in the given order. This procedure will last until the end of voting. All the senators who have lost their rights will be skipped during the procedure.

Suppose every senator is smart enough and will play the best strategy for his own party. Predict which party will finally announce the victory and change the Dota2 game. The output should be "Radiant" or "Dire".

Input: senate = "RDD"
Output: "Dire"
Explanation: 
The first senator comes from Radiant and he can just ban the next senator's right in round 1. 
And the second senator can't exercise any rights anymore since his right has been banned. 
And the third senator comes from Dire and he can ban the first senator's right in round 1. 
And in round 2, the third senator can just announce the victory since he is the only guy in the senate who can vote.

*/
# include<iostream>
# include<string>
# include<queue>
using namespace std;
string party_victory(string str){
    queue<int>q; // for index store every string element
    queue<int>r ; // index store for r charector
    queue<int>d; // index store for d charector

    for(int i=0;i<str.size();i++){
        q.push(i); // index store 
        if(str[i]=='R') r.push(i); // index store for r 
        else d.push(i); // index storee for d 
    }
    while(q.size()>1){
        if(str[q.front()]=='X') q.pop(); // ami str x dekhla pop kore debo queue thaka oi index k 
        else if(str[q.front()]=='R'){ // jodi oi ta r hoy takh
            // first check victory // winng condition
            if(d.size()==0) return "Radiant";

            else{ // take right of next d
                str[d.front()] ='X'; // r ar pore je d thakba taka taka x korbo
                d.pop(); // queue thaka taka udia debo

                q.push(q.front()); // oi j r index taka queue pacha push korlam 
                q.pop();// dia udia dilam 

                r.push(r.front()); // same r ao korbo
                r.pop();
            }

        }
        else{ // q.fornt jodi d thaka 
             // first check victory // winng condition
            if(r.size()==0) return "Dire";

            else{ // take right of next d
                str[r.front()] ='X'; // d ar pore je d thakba taka taka x korbo
                r.pop(); // queue thaka taka udia debo

                q.push(q.front()); // oi j d index taka queue pacha push korlam 
                q.pop();// dia udia dilam 

                d.push(d.front()); // same d ao korbo
                d.pop();
            }
        }
    }

    if(str[q.front()]=='R') return "Radiant";
    else return "Dire";
}
int main(){
    string str = "RDD";
    string  ss = party_victory(str);
    cout<<ss<<" ";
}