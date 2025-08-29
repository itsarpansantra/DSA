// given n string vector 0 to 9 . return the index which has max value
// input -> 0123,0023,456,00182,940,2901 . 
// output -> 5
# include<iostream>
# include<string>
using namespace std;
int main(){
    string arr[] ={"0123","0023","46","00182","940","2901"};
    int max = stoi (arr[0]);
    string maxString = arr[0];
    for(int i=1;i<=5;i++){
        int x = stoi (arr[i]);
        if(x>max){
            max=x;
            maxString=arr[i];
        }
    }
    cout<<maxString;
}
