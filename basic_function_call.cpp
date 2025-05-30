#include <bits/stdc++.h>

using namespace std;

void func ( const vector<int> &v){
    // for (int i = 0;i <v.size();i++){
    //     v[i]*=10;
    // }
    for (int x : v){
        cout <<x <<" ";
    }
    cout<<endl;
}

int main ()
{
    vector <int > v = {1,2,3,4,5};
    for (int x : v){
        cout <<x <<" ";
    }
    cout<<endl;
    func(v);
    for (int x : v){
        cout <<x <<" ";
    }

}