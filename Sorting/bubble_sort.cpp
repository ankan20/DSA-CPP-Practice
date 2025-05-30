#include<iostream>
#include<vector>

using namespace std;

void bubble_sort (vector<int> &arr){
    int n= arr.size();
    for(int i= n-1 ;i>=1;i--){
        for(int j = 0;j<= i-1;j++){
            if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        }
    }
}

int main (){
    int n ;
    cout<<"Enter Array size : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter Array elements : "<<endl;
    for(int i = 0;i<n ;i++){
        cout<<"Enter "<<i+1<<"th value : ";
        cin>>arr[i];
    }
    cout<<"Befor sorting array : "<<endl;
    for(auto val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
    bubble_sort(arr);
    cout<<"After sorting array : "<<endl;
    for(auto val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}