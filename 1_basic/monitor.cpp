# include<iostream>
# include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;                // Number of visits
    vector<int> ranks(n);

    for (int i = 0; i < n; i++) {
        cin >> ranks[i];      // Ranks of students
    }

    int cuts = 0;
    int current = ranks[0];   // First student is always written

    for (int i = 1; i < n; i++) {
        if (ranks[i] < current) {   // New student has better rank
            cuts++;                 // Previous one is cut
            current = ranks[i];     // Update current register entry
        }
    }

    cout << cuts << endl;
    return 0;
}