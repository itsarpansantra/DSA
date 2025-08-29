// find the output
#include <iostream> 
using namespace std; // input 2 3 6
int main() 
{ 
    int x; 
    cout << "Enter first number: "; 
    cin >> x;  
    int y, m; 
    cout << "Enter second number and value for taking modulus : "; 
    cin >> y >> m; 
    int Z = (x * y) % m; 
    cout << "Output is: " << Z; 
}