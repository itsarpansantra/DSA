// if my input is 5 
// pascal tringle is 
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1       
1 5 10 10 5 1 
*/
// # include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         int current=1;
//         for(int j=0;j<=i;j++){
//             cout<<current<<" ";
//             current = current *(i-j)/(j+1);
//         }
//         cout<<endl;
//     }
// }

// Another type
# include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}
int combination(int n, int r){
    int ncr =fact(n)/(fact(r)*fact(n-r)); 
    return ncr;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";//icj
        }
        cout<<endl;
    }

}


// using vector
// # include<iostream>
// # include<vector>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter no of Rows: ";
//     cin>>m;
//     vector< vector<int> >v; // this is 2D vector 
//     for(int i=1;i<=m;i++){
//         vector<int>a(i); // nutun akta vector banalam j first 1 ta column tarpor 2 to arakam barbe
//         v.push_back(a); // baro vector puro vector ta push kore dilam 
//     }

//     for(int i=0;i<m;i++){
//         for(int j=0;j<=i;j++){
//             if(j==0 || j==i) v[i][j]=1;
//             else{
//                 v[i][j]=v[i-1][j]+v[i-1][j-1];
//             }
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<=i;j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }