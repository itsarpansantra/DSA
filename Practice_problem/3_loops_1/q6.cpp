// Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop
# include<iostream>
using namespace std;
int main(){
   int i = 0; 
   while (i < 26) { 
   cout << "ASCII value of " << (char)(i + 'A') << " is " << (int)(i + 'A') << endl;
   i++;   
   }
}