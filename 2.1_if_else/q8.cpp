// WAP for finding the volume of the cylinder by taking radius and height as input.
# include<iostream>
using namespace std;
int main(){
    int redius , height;
    cout<<"Enter cylinder redius: ";
    cin>>redius;
    cout<<"Enter cylinder height: ";
    cin>>height;
    float volume = 3.14* redius*redius*height;
    cout<<volume;

}