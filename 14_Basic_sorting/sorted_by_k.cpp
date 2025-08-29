// blly n size r array doa thakba . k akta amon number thakba . jeta thaka 
// ex: |X1-k| , |x2-k| ,|x3-k|,|x4-k|,|x5-k| -> x1,x2,x3,x4,x5 r element . -k korer por array amr sorted hoba 
// so find range of k 
# include<iostream>
# include<algorithm>
# include<climits>
using namespace std;
float max(float a , float b){
    if(a>=b) return a;
    else return b;
}
float min(float a , float b){
    if(a<b) return a;
    else return b;
}
int main(){
    int arr[]={5,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    float kmax=(float)(INT_MAX);
    float kmin=(float)(INT_MIN);
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]) { // find kmin
           kmin = max(kmin,(arr[i]+arr[i+1])/2.0);
       }
       else{ // find kmax
        kmax = min(kmax,(arr[i]+arr[i+1])/2.0);
       }
       if(kmin>kmax){
        flag = false;
        break;
       }
    }
    if(flag==false) cout<<-1;
    else if(kmin==kmax){
        if(kmin-(int)kmin==0){ // kmin and kmax are integer
            cout<<"ther is only one value of k: "<<kmin;
        }
        else cout<<-1;
    }
    else {
        if(kmin-(int)kmin>0){
            kmin = (int)kmin+1;
        }
        cout<<"range of k is ["<<kmin<<","<<(int)kmax<<"]";
    }
}