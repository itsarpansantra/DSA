# include<iostream>
using namespace std;
int main(){

    char charecter;
    cout<<"Enter charecter: ";
    cin>>charecter;

    switch(charecter){

        case 'a':
        cout<<"VOWEL";
        break;
        case 'e':
        cout<<"VOWEL";
        break;
        case 'i':
        cout<<"VOWEL";
        break;
        case 'o':
        cout<<"VOWEL";
        break;
        case 'u':
        cout<<"VOWEL";
        break;
        default: 
        cout<<"CONSONENT"<<endl;
    }

    return 0;
}