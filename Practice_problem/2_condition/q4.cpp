//  WAP for finding the volume of the cylinder by taking radius and height as input
#include <iostream> 
using namespace std; 
int main() 
{ 
    int radius,height; 
    cout<<"Enter radius and height: ";
    cin>>radius>>height; 
    float volume = 3.14 * radius*radius*height;
    cout<<"volume of cylinder : "<<volume; 
}