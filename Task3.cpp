#include<iostream>
using namespace std; 
#include<string>
class Person{
    public: 
    string name; 
    int age; 
    //comstructor: 
    Person(string n="",int a=0):name(n),age(a){}
    //func
    void setPerson(string s,int a){
        age=a;
        name=s; 
    }
    void displayPerson(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl; 
    }
}; 
class Student: virtual public Person{
    public: 
    int studentID; 
    Student(int id=0):studentID(id){}
    void displayStudent(){
        cout<<"Student ID: "<<studentID<<endl; 
    }
}; 
class Employee: virtual public Person{
    public: 
    int EmployeeID; 
    Employee(int eid=0):EmployeeID(eid){}
    void displayEmployee(){
        cout<<"Employee ID: "<<EmployeeID<<endl; 
    }
}; 
class TeachingAssistant:public Student, public Employee{
    public: 
    string subject; 
    //person is initiazlized here: 
    TeachingAssistant(string n,int a,int sid,int eid,string sub):Person(n,a),Student(sid),Employee(eid),subject(sub){}
    void displayTA() {
        displayPerson();
        displayStudent();
        displayEmployee();
        cout << "Subject: " << subject << endl;
    }
};
int main(){
    TeachingAssistant ta("Ali", 22, 101, 5001, "OOP");

    cout << "Initial Data:\n";
    ta.displayTA();

    // Using setPerson()
    cout << "\nAfter Updating Person Info:\n";
    ta.setPerson("Ahmed", 23);
    ta.displayTA();

    return 0;
}
