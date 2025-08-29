// deque te akta inbuld function acha . amra manually banalam agar ta te 
# include<iostream>
# include<deque>
using namespace std;
void display(deque<int>de){
    int n = de.size(); // queue r size print korlam 
    for(int i=1;i<=n;i++){
        int x = de.front(); // all time front of queue bar korbo
        cout<<x<<" "; // dia print korbo
        de.pop_back(); // bar kore dabo queue thaka
        de.push_back(x); // dia oi queue ta push kore dabo 
    }
    cout<<endl;
}
int main(){
    deque<int>de;
    de.push_back(10);
    de.push_back(20);
    de.push_back(30);
    de.push_back(40);
    display(de);
}