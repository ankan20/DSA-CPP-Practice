#include<iostream>
#include<vector>

using namespace std;

void selection_sort(vector<int> &arr) {
    int mini = 0;
    int n =arr.size();
    for(int i = 0 ;i<n-1;i++){
        mini = i;
        for(int j = i;j<n;j++){
            if(arr[mini]>arr[j]) mini = j;
        }
        swap(arr[i],arr[mini]);
    }
}

int main (){
    vector<int> arr={2,5,3,9,10};

    cout<<"Befor sorting array : "<<endl;
    for(auto val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
    selection_sort(arr);
    cout<<"After sorting array : "<<endl;
    for(auto val: arr){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}