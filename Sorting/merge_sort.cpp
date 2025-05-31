#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& arr ,int low ,int mid ,int high){
    int left = low ,right = mid+1;
    vector<int>temp;
    while(left<= mid && right <= high){
        if(arr[left]<= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<= mid ){
        temp.push_back(arr[left++]);
    }
    while(right<= high){
        temp.push_back(arr[right++]);
    }

    for(int i = low ;i<= high;i++){
        arr[i]= temp [i- low];
    }
}

//merge sort algo
void merge_sort(vector<int> & arr ,int low ,int high){
    int mid = low +(high - low)/2 ;
    if(low >= high) return ;
    merge_sort(arr,low ,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main (){
    vector<int> arr = {2,9,10,3,4,6,0};
    cout<<"Array before sorting: "<<endl;
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    merge_sort(arr,0,arr.size()-1);
    cout<<"Array after sorting : "<<endl;
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}