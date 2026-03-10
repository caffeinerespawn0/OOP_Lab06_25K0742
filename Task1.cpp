#include<iostream>
using namespace std; 
#include <string>
class Student{
    protected: 
    int studentID; 
    string course; 
    public: 
   Student(int s = 0, string c = "") : studentID(s), course(c) {}
    void setStudentInfo(int st,string co){
        studentID=st;
        course=co; 
    }
    void displayStudent(){
        cout<<"Student ID: "<<studentID<<endl; 
        cout<<"Course: "<<course<<endl; 
    }
}; 
class Employee{
    protected:
    int employeeID; 
    int salary; 
    public: 
    Employee(int e = 0, int s = 0) : employeeID(e), salary(s) {}
    void setEmployeeInfo(int ed,int sl){
        employeeID=ed; 
        salary=sl; 
    }
    void displayEmployee(){
        cout<<"Employee ID: "<<employeeID<<endl;
        cout<<"Salary: "<<salary<<endl; 
    }
}; 
class TeachingAssistant:public Student, public Employee{
private: 
string TAName; 
public: 
TeachingAssistant(string t):Student(),Employee(),TAName(t){}
void setTAinfo(string TA){
    TAName=TA; 
}
void displayTA(){
    displayStudent();
    displayEmployee(); 
    cout<<"TA Name: "<<TAName<<endl; 
}
}; 
int main(){
    TeachingAssistant myTA("To be assigned"); 
    myTA.setStudentInfo(1234, "Computer Science");
    myTA.setEmployeeInfo(9988, 50000);
    myTA.setTAinfo("Danish");
    myTA.displayTA(); 
    return 0; 

}