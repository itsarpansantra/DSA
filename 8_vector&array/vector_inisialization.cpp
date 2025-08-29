// # include<iostream>
// # include<vector>
// using namespace std;
// int main(){
//     vector<int>v(5);
//     // when i insialize  v(5) that means . amar akta array halo 5 ta gharer . kintu pratek ghara 0 print hachha . karon ami kono value dayne
//     // array tayre hoba size ar capacity 2 to same thakba 
//     cout<<v[0]<<endl;// 0th value 0 . ami jay likhi na kano 0 asba 
//     cout<<v.size() <<endl;
//     cout<<v.capacity();
    
// }
# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int>v(5,9);// ai line ter mana 5 ta gharer array tayre halo . tar modha pratek r value 9
    cout<<v[4]<<endl; // 9
    cout<<v.size() <<endl;//5
    cout<<v.capacity();//5
}