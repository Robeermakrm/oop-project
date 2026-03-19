#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include <Person.h>

using namespace std;


class Teacher:public Person
{
protected :
    int teacherID;
    string subject;
    float salary;
public :
    Teacher()
    {

    }
    Teacher(int teacherID,string subject,float salary,string name,int age, string gender, string address, string phoneNumber, string email)
    {
        this ->teacherID=teacherID;
        this ->subject=subject;
        this->salary=salary;
        this->name=name;
        this->age=age;
        this ->gender=gender;
        this ->address=address;
        this -> phoneNumber=phoneNumber;
        this ->email=email;

    }
    void set_teacherID(int teacherID)
    {
        this ->teacherID=teacherID;
    }
    void set_subject(string subject)
    {
        this ->subject=subject;
    }
    void set_salary(float salary)
    {
        this->salary=salary;
    }
    int get_teacherID()
    {
        return teacherID;
    }
    string get_subject()
    {
        return subject;
    }
    float get_salary()
    {
        return salary;
    }
    void print ()
    {
        Person::print();
        cout<<"The teacherID is : "<<teacherID<<endl;
        cout<<"The subject is : "<<subject<<endl;
        cout<<"The salary is : "<<salary<<endl;
    }
    void information()
    {   cout<<"enter a data teacher"<<endl;
        Person::information();
        cout<<"please enter teacherID : "<<endl;
        cin>>teacherID;
        cout<<"please enter subbject : "<<endl;
        cin>>subject;
        cout<<"please enter salary : "<<endl;
        cin>>salary;
    }
};

#endif // TEACHER_H
