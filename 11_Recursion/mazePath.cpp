// # include<iostream>
// using namespace std;
// int maze(int sr,int sc , int er , int ec){
//     if(sr>er || sc>ec) return 0;
//     if(sr==er &&sc==ec)return 1;
//     int rightways=maze(sr,sc+1,er,ec);
//     int downways = maze(sr+1,sc,er,ec);
//     int totalways =rightways+downways;
//     return totalways;  
// }
// int main(){
//     cout<<maze(1,1,4,3);   
// }

// another type to find way
// using two veriables

// # include<iostream>
// using namespace std;
// int maze2(int row ,int column){
//     if(row<1 || column<1) return 0;
//     if(row==1 && column==1) return 1; 
//     int rightways=maze2(row , column-1); // right
//     int downways = maze2(row-1,column);// down
//     int totalways =rightways+downways;
//     return totalways;  
// }
// int main(){
//    cout<< maze2(3,3);   
// }
// how to count way  . print the way of maze
# include<iostream>
using namespace std;
 void mazeway(int sr,int sc , int er , int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return ;
    }
      mazeway(sr,sc+1,er,ec,s+'R');
      mazeway (sr+1,sc,er,ec,s+'D');
}
int main(){
    mazeway(1,1,3,3,"");   
}