#include<bits/stdc++.h>

using namespace std;

class Human {
    private:
        string name;
        int dob;
    protected:
        int height;
        string hairStyle;
    public :
        int age;
    
    Human(string name,int dob,int height,string hairStyle,int age){
        this->age = age;
        this->dob = dob;
        this->hairStyle = hairStyle;
        this->height = height;
        this->name = name;
        cout<<"Constructor of Human Class\n";
    }
    Human(int height,string hairStyle,int age){
        this->height=height;
        this->hairStyle= hairStyle;
        this->age = age;
    }

};

class Ankan : private Human{
    public :
        Ankan(int age): Human( height, hairStyle, age){
            // this->age=age;
        }
        void PrintDetails(){
            cout<<"Age : "<<this->age<<" , "<<endl;
        }
};

int main(){
    Human h1("Ankan",2003,175,"Short",21);
    cout<<h1.age<<endl;
    Ankan a1(21);
    a1.PrintDetails();
    // cout<<a1.age<<endl;

    return 0;
}