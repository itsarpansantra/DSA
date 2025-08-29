# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
vector<int>search(vector<int>&v,int k, int target){
    int n=v.size();
    vector<int>ans(k);
    if(target<v[0]){ // jodi amar target -1 hoy . to ami first k element puch kore dabo
        for(int i=0;i<k;i++){
            ans[i]=v[i];
        }
        return ans;
    }
    if(target>v[n-1]){//// jodi amar target 29 hoy . to ami last k element puch kore dabo
        int i=n-1;//amar last element index
        int j=k-1;//amar vector r index . jeta khali . actually last index denote korcha
        while(j>=0){
            ans[j]=v[i];
            i--;
            j--;
        }
        return ans;
    }
    int low=0;
    int high=n-1;
    bool flag =false; // it representing target element present or not
    int temp =0;//representing the correct index the array 
    //normal binary search
    int mid =-1;
    while(low<=high){
        mid=(low+high)/2;
        if(v[mid]==target){
            flag=true;//present the value
            ans[temp]=v[mid];
            temp++;
            break;
        }
        else if(v[mid]>target) high=mid-1;
        else low=mid+1;
    }
    int lb=high;// mid r right thkba
    int ub=low; // mid r left thakba
    if(flag==true){
        lb=mid-1;//mid r left thakba
        ub=mid+1;//mid r right thkba
    }
    while(temp<k && lb>=0 && ub<=n-1){//temp hochha jay vector e push korbo tar index. ar k hochha kato gulo element push korbo
// lb jano 0 r thaka baro hoy . nahola baira baria jaba . same ub n r thaka choto hoy
        int d1 = abs(target-v[lb]); // mod of target ar lb element 
        int d2 = abs(target -v[ub]);// mod of target ar ub element 
        if(d1<=d2){ // jodi 2 tor e difference same hoy to ami d1 k aga nabo
            ans[temp]=v[lb]; // oi ans vector a vector er lb k element korbo
            lb--;
        }
        else{ //d1<d2 hola
            ans[temp]=v[ub];
            ub++;
        }
        temp++;

    }
    if(lb<0){ // jakhn lb kono element thakba na . takhn sudhu ub element naba
        while(temp<k){ // vector ta jodi khali thaka 
            ans[temp]=v[ub];
            ub++;
            temp++;
        }
    }
    if(ub>n-1){// jakhn ub kono element thakba na . takhn sudhu lb element naba
        while(temp<k){ // vector ta jodi khali thaka 
            ans[temp]=v[lb];
            lb--;
            temp++;
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    int arr[]={5,6,8,15,17,18,20,25};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    int target = 8; // basically target element thaka check korbo
    int k = 3;//this number of element i want 
    vector<int>p=search(v,k,target);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}