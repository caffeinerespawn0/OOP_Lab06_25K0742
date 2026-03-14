#include<iostream>
using namespace std; 
#include<string>
class Person{
    public:
    string name; 
    int age; 
    Person(string n, int a):name(n),age(a){}
};
class Employee:public Person{
    public: 
    int employeeID; 
    string department; 
    Employee(string n,int a,int e,string d):Person(n,a),employeeID(e),department(d){}
    void displayEmployee(){
        cout<<"Employee ID: "<<employeeID<<endl; 
        cout<<"Department: "<<department<<endl; 
    }
};
class Manager: public Employee{
    public: 
    int teamsize; 
    Manager(int t,string n,int a,int e,string d):teamsize(t),Employee(n,a,e,d){}
    void displayManager(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl; 
        displayEmployee(); 
        cout<<"Team Size: "<<teamsize<<endl;
    }
};
int main(){
    Manager m(6,"Ayesha Khan",29,890076,"HR");
    m.displayManager();
    return 0; 
}