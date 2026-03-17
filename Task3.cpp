#include<iostream>
using namespace std; 
#include<string>
class Character{
    public: 
    virtual void attack(){
        cout<<"Character Attacks"<<endl;
    }
};
class Warrior: public Character{
    public:
    void attack() override{
        cout<<"Warrior attacks with sword"<<endl; 
    }
};
class Archer:public Character{
    public: 
    void attack() override{
        cout<<"Archer shoots arrows"<<endl;
    }
};
class Mage: public Character{
    public:
    void attack() override{
    cout<<"Mage casts spell magic"<<endl;
    }
};
int main(){
    Character *ptr; 
    Warrior warrior;
    Archer archer; 
    Mage mage; 
    ptr=&warrior;
    ptr->attack();
    ptr=&archer;
    ptr->attack();
    ptr=&mage;
    ptr->attack(); 
    return 0; 
}