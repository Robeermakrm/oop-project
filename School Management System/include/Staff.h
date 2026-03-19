#ifndef STAFF_H
#define STAFF_H


class Staff:public Person
{
protected :
    int staffID;
    string role;
    float salary;
public:
    Staff()
    {

    }
    Staff(int staffID,string role,float salary,string name,int age, string gender, string address, string phoneNumber, string email)
    {

        this ->staffID=staffID;
        this ->role=role;
        this ->salary=salary;
        this->name=name;
        this->age=age;
        this ->gender=gender;
        this ->address=address;
        this -> phoneNumber=phoneNumber;
        this ->email=email;

    }
    void set_staffId(int staffID)
    {
        this ->staffID=staffID;
    }
    void set_role(string role)
    {
        this ->role=role;
    }
    void set_salary(float salary)
    {
        this ->salary=salary;
    }
    int get_staffID()
    {
        return staffID;
    }
    string get_role()
    {
        return role;
    }
    float get_salary()
    {
        return salary;
    }
    void print ()
    {
        Person::print();
        cout<<"The staffID is : "<<staffID<<endl;
        cout<<"The role is : "<<role<<endl;
        cout<<"The salary is : "<<salary<<endl;

    }
    void information()
    {
        cout<<"enter a data staff"<<endl;
        Person::information();
        cout<<"please enter a staffID : "<<endl;
        cin>>staffID;
        cout<<"please enter a role  : "<<endl;
        cin>>role;
        cout<<"please enter a salary : "<<endl;
        cin>>salary;

    }
};

#endif // STAFF_H
