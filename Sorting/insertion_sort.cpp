#include<iostream>
#include<vector>

using namespace std;

void insertion_sort(vector<int>&arr){
    int n = arr.size();
    for(int i = 1;i<n;i++){
        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
        
    }
}

int main (){
    vector<int> arr = {13,12,5,4,3,19,6};


    cout<<"Befor sorting array : "<<endl;
    for(auto val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
    insertion_sort(arr);
    cout<<"After sorting array : "<<endl;
    for(auto val: arr){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}