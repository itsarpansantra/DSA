# include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter day: ";
    cin>>day;

    switch(day){

        case 1: 
        cout<<"MONDAY"<<endl;
        break;

        case 2: 
        cout<<"TUESDAY"<<endl;
        break;
        
        case 3: 
        cout<<"WEDNESSDAY"<<endl;
        break;
        
        case 4: 
        cout<<"THRUSDAY"<<endl;
        break;
        
        case 5: 
        cout<<"FRIDAY"<<endl;
        break;
        
        case 6: 
        cout<<"SATURDAY"<<endl;
        break;

        case 7: 
        cout<<"SUNDAY"<<endl;
        break;
        
        default:
        cout<<"NOT A VALID DAY";
    }
    
 return 0;
    
}