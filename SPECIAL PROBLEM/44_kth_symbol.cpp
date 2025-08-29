# include<iostream>
using namespace std;
int kth_grammar(int n , int k){
    if(n==1) return 0;
    // odd one =1;
    //odd zero=0;
    // even one = 0;
    // even zero=1;
    //0->01
    //1->10
    if(k%2==0){ // fliping // even
        int prevans= kth_grammar(n-1,k/2); // ami sobsamoy previous a gia check korbo . akdom last 0 r kacha jabo and dia flip hola flip kore asbo
        if(prevans==0) return 1; // fliping
        else return 0;
    }
    else {//odd 
        int prevans= kth_grammar(n-1,k/2+1);
        return prevans;
    }
}
int main(){
    int n=4;
    int k=7;
    cout<< kth_grammar(n,k);
}