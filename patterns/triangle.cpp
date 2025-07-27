#include<iostream>

using namespace std;

/*
n = 5
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5 

*/

void printPattern(int n){
    for(int i = 0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main (){
    int n ;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    printPattern(n);

    return 0;
}