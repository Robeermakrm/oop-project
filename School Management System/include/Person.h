#ifndef PERSON_H
#define PERSON_H
#include <iostream>


using namespace std;

class Person
{
protected:
    string name;
    int age;
    string gender;
    string address;
    string phoneNumber;
    string email;
public :
    Person ()
    {

    }
    Person (string name,int age, string gender, string address, string phoneNumber, string email)
    {
        this->name=name;
        this->age=age;
        this ->gender=gender;
        this ->address=address;
        this -> phoneNumber=phoneNumber;
        this ->email=email;
    }
    void set_name(string name)
    {
        this->name=name;
    }
    void set_age(int age )
    {
        this->age=age;
    }
    void set_gender(string gender )
    {
        this ->gender=gender;
    }
    void set_address(string address)
    {
        this ->address=address;
    }
    void set_phoneNumber(string phoneNumber)
    {
        this -> phoneNumber=phoneNumber;
    }
    void set_email(string emil)
    {
        this ->email=emil;
    }
    string get_name()
    {
        return name;
    }
    int get_age()
    {
        return age ;
    }
    string get_gender()
    {
        return gender;
    }
    string get_address()
    {
        return address;
    }
    string get_phoneNumber()
    {
        return phoneNumber;
    }
    string get_email()
    {
        return email;
    }
    void print()
    {
        cout<<"the name is : "<<name<<endl;
        cout<<"the age is : "<<age<<endl;
        cout<<"the gender is : "<<gender<<endl;
        cout<<"the address is : "<<address<<endl;
        cout<<"the phoneNumper is : "<<phoneNumber<<endl;
        cout<<"the email is : "<<email<<endl;
    }

    void information()
    {
        cout<<"pleas enter your name : "<<endl;
        cin>>name;
        cout<<"pleas enter your age: "<<endl;
        cin>>age;
        cout<<"pleas enter your gender : "<<endl;
        cin>>gender;
        cout<<"pleas enter your address : "<<endl;
        cin>>address;
        cout<<"pleas enter your phone Numper : "<<endl;
        cin>>phoneNumber;
        cout<<"pleas enter your email : "<<endl;
        cin>>email;

    }




};
#endif
