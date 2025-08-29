# include<iostream>
# include<vector>
# include<climits>
using namespace std;
bool check(vector<int>&v,int speed ,int hour){
    int n = v.size();
    int count=0; // i calculate 1 hour akta tray modha aksatha koto gulo kola khaba seta 1 dharbo . again ...
    for(int i=0;i<n;i++){ 
        if(count>hour) return false;  // ai ta basically anek baro number er janno . hour ar v[i]
        // ai ta na likhla sob integer value k long long tipe cast korta hoba .
        if(speed>=v[i]) count++; // jodi speed = 8 , array te element acha 6 . aksatha o puro ta khata parba . tai count 1 barabo
        else if(v[i]%speed==0) count+=v[i]/speed;
        // jodi speed = 8 , arrayelement =16 . to 16/8=2 . count 2 barbo
        else  count+=v[i]/speed+1;
        // jodi speed = 8 , array element = 15 . to (15/8)+1 korbo count k 2 korbo
    }
   if(count>hour) return false;
   else return true;
}
int eatingBanna(vector<int>&v,int hour){
    int n = v.size();
    int max= INT_MIN;
    for(int i=0;i<n;i++){
        if(max<v[i]) max =v[i]; 
    }
    int low=1; // 1 ta to koko khata pare 1 hour
    int high =max; // array sab thaka baro element aksatha khata pare .highest
    int min_speed = -1; // i calculate spped how mush time need to eat all bananas
    while(low<=high){
        int mid = (low+high)/2; 
        if(check(v,mid,hour)){
            min_speed=mid; // upgradate the value 
            high = mid-1; // assume mid =6  . ar thaka basi samoy to khata parba . ar thaka kom hoy nake check korbo
        }
        else low=high+1; 
    }
    return min_speed;
}
int main(){
    int arr[]={3,6,7,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];

    }
    int hour = 8;
    cout<<eatingBanna(v,hour);
}
