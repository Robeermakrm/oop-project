
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "Person.h"

using namespace std;
class Student:public Person
{
protected :
    int studentID;
    string gradeLevel;
    float GPA;
public :
    Student()
    {

    }
    Student(int studentID,string gradeLevel,float GPA,string name,int age, string gender, string address, string phoneNumber, string email)
    {
        this->name=name;
        this->age=age;
        this ->gender=gender;
        this ->address=address;
        this -> phoneNumber=phoneNumber;
        this ->email=email;
        this->studentID=studentID;
        this ->gradeLevel=gradeLevel;
        this->GPA=GPA;

    }
    void set_studentId(int studentID)
    {
        this->studentID=studentID;
    }
    void set_gradeLevel(string gradeLevel )
    {
        this ->gradeLevel=gradeLevel;
    }
    void set_GPA(float GPA)
    {
        this->GPA=GPA;
    }
    int get_studentID()
    {
        return studentID;
    }
    string get_gradeLevel()
    {
        return gradeLevel;
    }
    float get_GPA()
    {
        return GPA;
    }
    void print()
    {
        Person::print();
        cout<<" the studentID is : "<<studentID<<endl;
        cout<<" the gradeLevel is : "<<gradeLevel<<endl;
        cout<<" the GPA is : "<<GPA<<endl;
    }
    void information()
    {   cout<<"enter a data student"<<endl;
        Person::information();
        cout<<"please enter studentID : "<<endl;
        cin>>studentID;
        cout<<"please enter gradeLevel : "<<endl;
        cin>>gradeLevel;
        cout<<"please enter GPA : "<<endl;
        cin>>GPA;
    }



};

#endif // STUDENT_H
