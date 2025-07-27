#include<iostream>
#include<cstring>
using namespace std;

//class
class Person {
    private:
        // int age ;
        int dob;
        string name ;
    public :
        int age ;
        char *sarname;
        // Person (string name ,int age,int dob){
        //     this->age =age;
        //     this->dob=dob;
        //     this->name = name;
        // }
        // Person (Person& temp){ //pass by reference
        //     cout<<"Called copy constructor"<<endl;
        //     this->age = temp.age;
        //     this->dob= temp.dob;
        //     this->name = temp.name;
        // }
        void printname (){
            cout<<"Name is : "<<name<<endl;
        }

};

int main (){

    Person p1;
    p1.age=21;
    p1.sarname = new char [10];
    strcpy(p1.sarname, "das");
    // p1.printname();
    Person p2(p1);
    // p2.printname();
    cout<<p1.sarname<<endl;
    cout<<p2.sarname<<endl;
    strcpy(p1.sarname,"NewDas");
    cout<<p2.sarname<<endl;
    

    return 0;
}