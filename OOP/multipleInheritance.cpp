#include<iostream>

using namespace std;

class A {

    public:
       void func1(){
        cout<<"A\n";
       }
};

class B :public A {
    public :
        void func1 (){
            cout<<"B\n";
        }
};

class C : public B {

};

int main (){

    C c1;
    c1.A::func1();

    return 0;
}