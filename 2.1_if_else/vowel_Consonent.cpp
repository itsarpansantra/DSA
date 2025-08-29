# include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a charecter : ";
    cin>>ch;
    int ascci=(int)ch;
    if((ascci>=97 && ascci<=122) || (ascci>=65 && ascci<=90)){
        if(ch=='a' || ch=='e'||ch=='i' ||ch=='o' ||ch=='u' ){
            cout<<"Vowel";
        }
        else{
            cout<<"consonent";
        }
    }
    else{
        cout<<"not a valid latter";
    }
}