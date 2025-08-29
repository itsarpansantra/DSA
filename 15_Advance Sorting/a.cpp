# include<iostream>
# include<vector>
# include<climits>
using namespace std;
// normalize
int count=0;
int normalize(vector<int>&a,vector<int>&b){
    int n1 = a.size();
    int n2 = b.size();
    int i=0,j=0;
    int c=0;//count
    while(i<n1 && j<n2){
        if(a[i]>b[j]){
            c+=(n1-i);
            j++;
        }
        else i++;
    }
    return c; 
}
void marge(vector<int>&a,vector<int>&b,vector<int>&v){
    int i=0,j=0,k=0;
    int n1 = a.size();
    int n2 = b.size();
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            v[k]=a[i];
            i++;
            k++;
        }
        else{
            v[k]=b[j];
            j++;
            k++;
        }
    }
    if(i==n1){
        while(j<n2){
            v[k]=b[j];
            j++;
            k++;
        }
    }
    if(j==n2){
        while(i<n1){
            v[k]=a[i];
            i++;
            k++;
        }
    }
}

void margesort(vector<int>&v){
    int n = v.size();
    if(n==1) return ;
    int n1 =n/2;
    int n2 = n-(n/2);

    vector<int>a(n1);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    vector<int>b(n2);
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }

    margesort(a);
    margesort(b);
    count+=normalize(a,b);
    marge(a,b,v);
}
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={5, 6, 7, 2, 1, 3, 4, 9, -25, 0 };
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    display(v);
    margesort(v);
    display(v);
    cout<<count;
}
