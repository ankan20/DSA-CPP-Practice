#include<iostream>

using namespace std;

class A {
    public :
        int a;
        int b;

        void operator+ (A& obj){
            int val1 = this->a - obj.a;
            int val2 = this->b - obj.b;
            cout<<"Value : "<<val1<<" , "<<val2<<endl;
        }
};

int main (){

    A obj1;
    obj1.a=10;
    obj1.b=9;

    A obj2;
    obj2.a=6;
    obj2.b=3;

    obj1 + obj2;




    return 0;
}